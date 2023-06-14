#include<stdio.h>

int main() {
    int val;
    scanf("%d", &val);

    int first = 0;
    int second = 1;

    //printf("Fibonacci Sequence: ");

    for (int i = 0; i < val; i++) {
        printf("%d ", first);
        int next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
