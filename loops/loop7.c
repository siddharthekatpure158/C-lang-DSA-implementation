#include<stdio.h>
int main(){
    int n,rev=0,digit;
    
    printf("enter digits");
    scanf("%d",&n);
    int newdigit=n;
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;

    }
    if(newdigit==rev){
        printf("it is an palindrom");
    }
    else{
        printf("not an palindrom");
    }

    return 0;

}