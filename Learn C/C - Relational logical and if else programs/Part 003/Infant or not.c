#include<stdio.h>
void main(){
  int v;
  char y,month='m';
  scanf("%d%c",&v,&y);
  if(y==month){
    if(v<12){
      printf("Yes");
    }else{
      printf("No");
    }
  }else{
    if(v<1){
      printf("Yes");
    }else{
      printf("No");
    }
  }
} 
