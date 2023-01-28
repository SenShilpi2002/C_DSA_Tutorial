#include<stdio.h>

struct bike{
     
    float displacement;
    char name[20];

};
void main()
{ 
    struct bike b1;
    printf("Enter the details of bike ");
    scanf("%f %c",&b1.displacement,&b1.name);
    printf("%0.2f is the displacement and name of the bike is %s",b1.displacement,puts(b1.name));


}