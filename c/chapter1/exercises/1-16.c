#include <stdio.h>
#define MAXLINE 1000

int getline(char s[], int maxline);
void copychar(char to[], char from[]);

int main(void)
{
	int len;                /* current line length */
	int nextLen;            /* next line length */
	int max;                /* maximum length seen so far */
	char line[MAXLINE];      /* current input line */
	char nextLine[MAXLINE];  /* next input line */
	char longest[MAXLINE];   /* longest line saved here */

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len == MAXLINE - 1) { /* is line longer than buffer size? */
			line[MAXLINE - 1] = '\n';
			nextLen = len;
			while (nextLen == MAXLINE - 1) { /* find the line's length */
				nextLen = getLine(nextLine, MAXLINE);
				len += nextLen;
			}
		}
		if  (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0)             /* there was a line */
		printf("%s -> %i\n", longest, max);

	return 0;
}

// Routine to read a line into array s, and return length
int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c= getchar()) != EOF && c != '\n';  ++i)
        s[i] = c;
    if (c == '\n'){
        s[i]='\n';
    }
    s[i]= '\0';
    return i;
}


void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) !='\0')
		++i;
}