#include<stdio.h>
int main(){
    int humidity,temperature;
    scanf("%d%d",&humidity,&temperature);
    if(humidity>90){
        printf("Yes");
    }else if(temperature<18){
        printf("Yes");
    }else if((humidity>70 && temperature<30)||(humidity>60 && temperature<24)){
        printf("Yes");
    }else{
        printf("No");
    }
}