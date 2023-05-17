#include<stdio.h>
int main(){
    char temp;
    scanf("%c",&temp);
    if(temp=='L'){
        printf("Hot water");
    }else if(temp == 'M'){
        printf("Moderate water");
    }else if(temp == 'R'){
        printf("Cold water");
    }else{
        printf("TURN ON");
    }
}