#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    if (abs(a) % 10 != b) {
        printf("%d%d",a,b);
    } else {
        printf("%d", a / 10);
    }

    return 0;
}
