#include<stdio.h>

int tenth(int value){
    int val = (value/10)%10;
    return val;
}

int main(){
    int a,oddsum = 0,evensum = 0;
    scanf("%d",&a);

    int arr[a+1];
    int tenth_arr[a+1];

    for(int i = 0;i<(sizeof(arr)/4)-1;i++){
        scanf("%d",&arr[i]);
        tenth_arr[i] = tenth(arr[i]);
    }

    for(int i = 0; i<a;i++){
        if(tenth_arr[i]%2 == 0){
            evensum+=tenth_arr[i];
        }else{
            oddsum+=tenth_arr[i];
        }
    }
    oddsum > evensum ? printf("%d",oddsum) : printf("%d",evensum);
}