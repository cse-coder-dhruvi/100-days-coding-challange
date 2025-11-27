//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
int main() {
    FILE *input, *output;
    char ch;
    // Open input file in read mode
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: input.txt not found.\n");
        return 1;
    }
    // Open output file in write mode
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(input);
        return 1;
    }
    // Read each character, convert to uppercase, and write to output
    while ((ch = fgetc(input)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32; // Convert lowercase to uppercase
        }
        fputc(ch, output);
    }
    fclose(input);
    fclose(output);
    printf("Conversion complete. Check output.txt for results.\n");
    return 0;
}
