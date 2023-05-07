#include<stdio.h>
int main(){
    int a,b,c,x,count;
    count = 0;
    scanf("%d%d%d%d",&a,&b,&c,&x);
    if(a%2==0){
        count+=1;
    }if(b%2 == 0){
        count+=1;
    }if(c%2==0){
        count+=1;
    }

    if(count>=2){
        for(int i = 1;i<=x;i++){
            if(i%2==0){
                printf("%d ",i);
            }
        }
    }else{
        for(int i = x;i>=1;i--){
            if(i%2!=0){
                printf("%d ",i);
            }
        }
    }
}