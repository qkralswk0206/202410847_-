#include <stdio.h>
#include <string.h>

int convCase(int ch) {
    const int diff = 'a' - 'A'; 
    if (ch >= 'A' && ch <= 'Z') 
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else 
        return ch;
}

int main(void) {
    char input[100]; 
    int length, i;
    printf("Input> ");
    fgets(input, sizeof(input), stdin); 
    length = strlen(input); 
    printf("Output> ");
    for (i = 0; i < length; i++) { 
        putchar(convCase(input[i])); 
    }
    return 0;
}
