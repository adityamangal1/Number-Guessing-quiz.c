#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
     
    int number;
    srand(time(0));
    number=rand()%200 + 1;

    printf("THE NUMBER IS %d", number);


    return 0;
}