#include <stdio.h>

void birthday(char name[], int age)
{
    printf("\nHappy birtday dear %s!", name);
    printf("\nYou are %d years old!", age );    
}

int main()
{   
    char name [] = "Bro";
    int age = 21;

    birthday();      