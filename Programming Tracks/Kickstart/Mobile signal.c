#include<stdio.h>
#include<string.h>

int main() {
    char a[10];  
    scanf("%s", a); 
    if (strcmp(a, "E") == 0) {
        printf("2G");
    } else if (strcmp(a, "H") == 0) {
        printf("3G");
    } else {
        printf("4G");
    }

    return 0;
}
