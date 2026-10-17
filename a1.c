#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int n;
    n=rand()%3;
    int choice;
    printf("enter your choice(0 for roack 1 for paper 2 for scissor)\n");
    scanf("%d",&choice);
    if(choice==0) printf("you chose rock\n");
    if(choice==1) printf("you choose rock\n");
    if(choice==2) printf("you choose scissor\n");
    if(choice==n){
        printf("game tied,you choose the same\n");
        return 0;
    }
    if(n==0){
        printf("you choose %d\n",choice);
        printf("computer choose rock\n");
        if(choice==3) printf("you win\n");
        if(choice!=3) printf("computer win : better luck\n");
        return 0;
    }
    if(n==1){
        printf("your choice  %d\n",choice);
        printf("computer choose paper\n");
        if(choice==0) printf("you win\n");
        if(choice!=0) printf("computer win\n");
        return 0;
        }
        if(n==2){
            printf("you choise %d\n",choice);
            printf("computer choose scissor\n");
            if(choice==1) printf("you win\n");
            if(choice!=1) printf("computer win\n");
            return 0;
        }
    }

