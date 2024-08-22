#include <stdio.h>

int main() {
    int val;
    char let;

    scanf("%c", &let);
    val = let;

    for (int i = val; i <= 122; i++) {
        if (i != 97 && i != 101 && i != 105 && i != 111 && i != 117) {
            printf("%c", i);
        }
    }

    return 0;
}
