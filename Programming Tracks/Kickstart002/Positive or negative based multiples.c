#include<stdio.h>
int main(){
    int a,ctr,value;
    scanf("%d",&a);
    if(a>0){
       value=a%10;
       for(ctr=1;ctr<=5;ctr++){
        printf("%d",ctr*value);
       }
    }
    else{
        a*=-1;
        value=a%10;
        for(ctr=1;ctr<=10;ctr++){
        printf("%d",ctr*value);
       }
    }
}