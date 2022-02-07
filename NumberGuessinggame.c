#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, count = 1;
    srand(time(0));
    num = rand() % 100;
    do
    {
        printf("Guess the number (smaller than 100)!!\n");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("Lower number please\n");
        }
        else if (guess < num)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("*You guessed it %d attempts*\n", count);
        }
        count++;
    } while (guess != num);
    return 0;
}