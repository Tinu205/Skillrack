#include<stdio.h>
#include<string.h>
char swap(char s){
    if(s>=65 && s<=90)
        s+=32;
    else if(s>=97 && s<=122)
        s-=32;

    return s;
}
int main(){
    char word[1000];
    int val;
    scanf("%s%d",word,&val);
    for(int i = 0;i<strlen(word);i++){
        if(i !=0 && (i+1)%val == 0){
            printf("%c",swap(word[i]));
        }else{
            printf("%c",word[i]);
        }
    }

}