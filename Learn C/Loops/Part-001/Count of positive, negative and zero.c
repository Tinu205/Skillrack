#include<stdio.h>
int main(){
    int a,pos = 0,neg = 0,zer = 0;
    scanf("%d",&a);
    int arr[a+1];
    //printf("%ld",sizeof(arr)/4);
    for(int i=0; i<a; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<a; i++){
        if(arr[i]>0){
            pos+=1;
        }else if(arr[i]<0){
            neg+=1;
        }else{
            zer+=1;
        }
    }
    printf("%d%d%d",pos,neg,zer);

}