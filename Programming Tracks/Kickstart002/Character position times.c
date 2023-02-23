#include<stdio.h>
int main(){
    char arr[6];
    scanf("%s",arr);

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%c",arr[i]);
        }
    }
}