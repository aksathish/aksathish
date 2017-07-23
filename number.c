#include <stdio.h>
int main()
{
    double number;

    printf("Enter a number");
    scanf("%lf", &number);

    if (number<=0)
    {
        if (number==0)
            printf("You entered ");
        else
            printf("Negative number");
    }
    else
        printf("Positive number");
    return 0;
}
