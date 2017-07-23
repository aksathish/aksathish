#include <stdio.h>
void main()
{
    int num;

    printf("Enter an integer");
    scanf("%d",&num);

    if(num%2 == 0)
        printf("Number is even");
    else
        printf("Number is odd");

   
}
