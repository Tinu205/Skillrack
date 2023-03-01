#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    scanf("%s%s",a,b);
    if(a[1]==b[1]&&a[0]==b[0]&&a[2]==a[2]){
        printf("yes");
    }else{
        printf("NO");
    }
}