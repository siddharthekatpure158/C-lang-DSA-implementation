#include<stdio.h>

int main(){
    int arr[]={5,4,3,2,1,1000,88,77};
    int n=sizeof(arr)/sizeof(arr[0]);

    
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

     for(int j=0;j<n;j++){
            printf("%d ",arr[j]);
        }
}