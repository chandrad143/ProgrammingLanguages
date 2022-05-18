//testing word count

#include <stdio.h>

#define IN  1    /* inside a word */
#define OUT 0    /* outside a word */

main()
{
	int c, lines, words, chars, state;

	state = OUT;
	lines = words = chars = 0;
	while ((c = getchar()) != EOF) {
		++chars;
		if (c == '\n')
			++lines;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++words;
		}
	}
	printf("lines: %d words: %d character: %d\n", lines, words, chars);

	return 0;
}