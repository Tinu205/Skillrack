#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    scanf("%s", input);  

    char output[200];
    strcpy(output, input); 
    strcat(output, input); 
    printf("%s\n", output);
}
