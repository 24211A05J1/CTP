#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("%d is negative",n);
    }
    else if(n>0){
        pirntf("%d is positive",n);
    }
    else{
        printf("neither negative nor positive");
    }
    return 0;
}