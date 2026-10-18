#include<stdio.h>
int main(){
    float t;;
    int h,o,a;
    scanf("%f",&t);//temprature of patient
    scanf("%d",&h);//herat rate of patient
    scanf("%d",&o);//oxegan rate
    scanf("%d",&a);//age of person
    if(t<=32&&t>=45||h<=30&&h>=220||o<=50&&o>=100||a<=0&&a>=120){
        printf("invalid\n");
    }
    else if(o<90){
        printf("critical\n");
    }
    else if(t>=40){
        if(h>120){
            printf("critical\n");
        }
        else
        printf("urgent\n");
    }
    else if(t>=38&&t<40){
        if(h>120){
            printf("urgent\n");
        }
        else if(a<12||a>65){
            printf("urgent\n");
        }
        else 
        printf("moderate\n");
    }
    else if(h>120){
        if(o<95){
            printf("urgent\n");
        }
        else 
        printf("moderate\n");
    }
    else
    printf("stable\n");
    if(a<5||a>65){
        printf("high age risk group\n");
    }
    else 
    printf("noramal age group\n");
    return 0;
}