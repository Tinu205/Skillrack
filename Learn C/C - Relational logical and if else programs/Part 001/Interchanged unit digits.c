#include<stdio.h>
int main(){
    int a,b,a1,b1,a2,b2;
    scanf("%d %d",&a,&b);
    a1 = a/10;
    b1 = b/10;
    a2 = a%10;
    b2 = b%10;
    //printf("a1->%d,a2->%d\nb1->%d,b2->%d\n",a1,a2,b1,b2);
    printf("%d %d",(a1*10)+b2,(b1*10)+a2);
}