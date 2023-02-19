#include <stdio.h>

int main() {
    int i, j,a,b;
    scanf("%d %d",&a,&b);

    for (i = b; i >= a; i--) {  
        for (j = a; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
