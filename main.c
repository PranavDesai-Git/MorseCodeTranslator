#include <stdio.h>
#include <string.h>
int main() {
    char input[60];
    const char *output[60];
    char k[] = {
        'a','b','c','d','e','f','g','h','i','j','k','l','m',
        'n','o','p','q','r','s','t','u','v','w','x','y','z'
    };
    const char *v[] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
        ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
        "...", "-", "..-", "...-", ".--", "-..-", "--.." 
    };
    printf("Enter text: ");
    fgets(input, sizeof(input), stdin);
    for (int i = 0; input[i] != '\0'; i++) {
        char c = input[i];
        if (c >= 'A' && c <= 'Z')
            c += 32;
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            output[i] = v[index];
            printf("%s ", output[i]);
        }
    }
    printf("\n");
    return 0;
}
