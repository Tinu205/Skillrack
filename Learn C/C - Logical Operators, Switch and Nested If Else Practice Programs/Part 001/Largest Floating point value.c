#include<stdio.h>

int decimal(float p){

    int q = p*100;
    q%=100;

    return q;
}

int maximum(int f, int s, int t){
    int max = 0;
    if(max<f){
        max = f;
    }
    if (max<s){
        max = s;
    }
    if(max<t) {
        max = t;
    }

    return max;
}
int main(){
    float a,b,c;
    int da,db,dc,max;

    scanf("%f%f%f",&a,&b,&c);

    da = decimal(a);
    db = decimal(b);
    dc = decimal(c);
    //printf("First:%d\nsecond:%d\nlast:%d\n",da,db,dc);
    max = maximum(da,db,dc);
    //printf("%d\n",max);
    if(da==max){
        printf("%.2f",a);
    }else if(db == max){
        printf("%.2f",b);
    }else{
        printf("%.2f",c);
    }

}