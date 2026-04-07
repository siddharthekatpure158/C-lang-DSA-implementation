#include<stdio.h>
int main(){
  int arr[5]={21,30,65,23,11};
  int max=arr[0];
  for(int i=0;i<5;i++){
    if(arr[i]>max){
      max=arr[i];
    }

//arr[i]<max&&arr[i]>sec_max

  }
int smax=arr[0];
  for(int i=0;i<5;i++){
    if(smax<arr[i] && arr[i]!=max){
      smax=arr[i];
    }


 



  }
  printf("Second Max from the Array is: ");
  printf("%d",smax);
    return 0;
}