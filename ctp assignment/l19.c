#include<stdio.h>

int main(){
    int num,reversed=0,temp,digit;

    printf("enter num");
    scanf("%d",&num);

    if(num==0){
        printf("zero");
    }
    temp==num;
    while(temp>0){
        reversed=reversed * 10+temp %10;
        temp/=10;
    }
    while (reversed>0){
        digit=reversed%10;
    

    switch(digit){
        case 0:printf("zero\t");
        break;
        case 1:printf("one\t");
        break;
        case 2:printf("two\t");
        break;
        case 3:printf("three\t");
        break;
        case 4:printf("four\t");
        break;
        case 5:printf("five\t");
        break;
        case 6:printf("six\t");
        break;
        case 7:printf("seven\t");
        break;
        case 8:printf("eight\t");
        break;
        case 9:printf("nine\t");
        break;
    }
    reversed/=10;
    }    


    return 0;
}