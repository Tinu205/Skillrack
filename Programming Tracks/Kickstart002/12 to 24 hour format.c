#include<stdio.h>
int main(){
    int time, hours,minutes;
    char period[3]="AM";
    scanf("%d",&time);
    hours = time/100;
    minutes = time%100;
    if (hours==00){
        hours=12;
    }else if(hours==12){
        period[0]='P';
    }else if (hours > 12){
        hours-=12;
        period[0]='P';
    }
    printf("%02d:%02d %s",hours,minutes,period);
}