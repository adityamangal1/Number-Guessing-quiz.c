#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number_guess(int number, int nguesses)
{
    int guess;

    do
    {
        scanf("%d", &guess);
        if (guess > number)
        {

            printf("LOWER NUMBER PLEASE!\n");
            printf("TRY AGAIN!\n");
        }

        else if (guess < number)
        {
            printf("HIGHER NUMBER PLEASE!\n");
            printf("TRY AGAIN!\n");
        }
        else
        {

            printf("CONGRATULATION!!\n");
            printf("YOU GUESSED IT IN %d attempts \n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}

int main()
{

    int number;
    int nguesses = 1;
    char o;
    int num, num1;
    srand(time(0));
    number = rand() % 200 + 1;
    // printf("THE NUMBER IS %d\n", number
    printf("\t\t\t****WELCOME TO NUMBER GUESSING GAME****\t\t\t\t\n");
    printf("\t\t\tHOPE YOU ENJOY!!\t\t\t\t\n");
    printf("ENTER ANY NUMBER BETWEEN 1 TO 200 :-\n");
    number_guess(number, nguesses);
    printf("\t\t\t*****GAME OVER*****\t\t\t\n");
    printf("THANK YOU! FOR PLAYING.\n");
    printf("COME SOON AGAIN!!\n");

    return 0;
}
