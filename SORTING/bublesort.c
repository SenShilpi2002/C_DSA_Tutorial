#include<stdio.h>
int main(){
    int arr[10];
    int temp;
   printf("Enter the array elements : ");
    for(int i=0;i<10;i++){
        printf("%darr[10]");
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
   printf("the new sorted array is : ");
    for(int j=0;j<10;j++){
         printf("%darr[i]");
    }
    return 0;
}