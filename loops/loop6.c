#include<stdio.h>

int main(){
    long n,digits;
    int sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0){
        digits=n%10;
        sum=sum+digits;
        n=n/10;
    }
    printf("%d",sum);

    return 0;
}