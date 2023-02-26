#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(a%i==0){
            if(b<3){
                printf("%d ",i);
                b+=1;
            }
        }
    }
}