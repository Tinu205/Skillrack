#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c = a>b?a-b:b-a;
    for(int i=1;i<11;i++){
        printf("%d ",i*c);
    }

}