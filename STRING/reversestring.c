#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char ch;
    char str2[6];
    char str1[6]="shilpi";
    for(i=0;i<3;i++){
        ch=str1[i];
        str2[j]=str1[2-i];
        str2[j]=ch;

    }
    for(j=0;j<3;j++){
       printf("%s",str2[j]); 
    }
    //printf("%s",str1);
return 0;
}









