#include<stdio.h>
#include<math.h>
int main(){
    int a,b,hyp;
    scanf("%d%d",&a,&b);
    hyp = sqrt((a*a)+(b*b));
    printf("%d",hyp);
}