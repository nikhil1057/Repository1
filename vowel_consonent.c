#include <stdio.h>

int main(void) {
char c;
    int LC, UC;

    scanf("%c",&c);

    LC = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    UC = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (LC || UC)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);

	return 0;
}
