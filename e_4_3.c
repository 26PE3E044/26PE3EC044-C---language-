
#include <stdio.h>

int main()
{
    char sex;
    int height, weight;
    int users = 3;

    for (int i = 1; i <= users; i++)
    {
        scanf(" %c %d", &sex, &height);

        if (sex == 'F' || sex == 'f')
        {
            weight = height - 105;
        }
        else
        {
            weight = height - 100;
        }
        printf("Standard weight: %d kg\n", weight);
    }

    

    return 0;
}