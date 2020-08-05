#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int number;
    int guess, nguesses = 1;
    srand(time(0));
    number = rand()%200 + 1;
    // printf("THE NUMBER IS %d\n", number);

        printf("ENTER THE NUMBER FROM 1 TO 200\n");
    do
    {
        scanf("%d", &guess);
        if (guess > number){

            printf("LOWER NUMBER PLEASE!\n");
        }

        else if (guess < number)
        {
            printf("HIGHER NUMBER PLEASE!\n");
        }
        else
        {

            printf("CONGRATULATION!\n");
            printf("YOU GUESSED IT IN %d attempts \n", nguesses);
        }
        nguesses++;
    } while(guess!=number);
    return 0;
}