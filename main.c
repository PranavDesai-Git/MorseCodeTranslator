#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char input[60];
    const char *output[60];
    char k[] = {
        'a','b','c','d','e','f','g','h','i','j','k','l','m',
        'n','o','p','q','r','s','t','u','v','w','x','y','z', ' '
    };
    const char *v[] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
        ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
        "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "/" 
    };
    printf("Enter text: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 1; 
    }
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }
    for (int i = 0; input[i] != '\0'; i++) {
        char c = input[i];
        int index = -1;
        c = tolower(c);
        if (c >= 'a' && c <= 'z') {
            index = c - 'a';
        } else if (c == ' ') {
            index = 26; 
        }
        if (index != -1) {
            output[i] = v[index];
            printf("%s ", output[i]);
        }
    }
    printf("\n");
    return 0;
}
