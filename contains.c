#include <stdio.h>
#include <string.h>

int contains_char(char* text, char* pattern) {
    for (int i = 0; i < strlen(text); ++i) {
        if (strchr(pattern, text[i])) {
            return i;
        }
    }

    return -1;
}

int main() {
    char t[] = "This is my first string";
    char p[] = "first";

    printf("%d\n", contains_char(t, p));

    return 0;
}