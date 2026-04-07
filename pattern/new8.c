#include<stdio.h>
int main(){
  int n;
  printf("enter Length of an array:");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    printf("%d",arr[n-i-1]);
  }
    return 0;
}