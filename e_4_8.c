
#include <stdio.h>
#include <limits.h>

int main()
{
    int score;
    int max = INT_MIN;
    int min = INT_MAX;

    while (1)
    {
        printf("Enter score (0 to stop): ");
        scanf("%d", &score);

        if (score == 0)
            break;

        if (score > 0)
        {
            if (score > max)
                max = score;

            if (score < min)
                min = score;
        }
    }

    if (max == INT_MIN)
    {
        printf("No positive scores entered.\n");
    }
    else
    {
        printf("max = %d, min = %d\n", max, min);
    }

    return 0;
}
