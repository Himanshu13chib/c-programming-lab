 #include <stdio.h>

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);

    int isVowel = (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
                   character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U');

    printf("The character '%c' is %s.\n", character, isVowel ? "a vowel" : "a consonant");

    return 0;
}
    