
#include <stdio.h>

int main()
{
    int NUM1, NUM2;

    printf("Enter the NUM1,NUM2: ");
    scanf("%d %d", &NUM1, &NUM2);

    if (NUM1 > NUM2)
    {
        printf("The larger number is: %d\n", NUM1);
    }
    else if (NUM1 == NUM2)
    {
        printf("Both numbers are equal.\n");
    }
    else
    { 
        printf("The larger number is: %d\n", NUM2);
    }

    return 0;
}