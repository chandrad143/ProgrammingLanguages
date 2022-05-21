#include <stdio.h>
#define maxline 1000
#define maxlen 80

int getline(char s[], int);
void copy(char to[], char from[]);

int main(void)
{
    int length;
    int line[maxline];

    while (((length = getLine(line, maxline)) > 0) > 0)
        if (length > maxlen)
            printf("%s", line);
    return 0;
}

int getline(char s[], int lim)
{
    int i, c;

    for (i = 0; i < lim - 1 && (c = getchar() != EOF) && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
}