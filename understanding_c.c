#include <stdio.h>
#include <stdbool.h>

int main(){

int age = 29; //focus %d
/*unsigned int k = 4294967295; //%u only positive*/
short int h = 32767; // smaller in size compared to the regular int %d 
//unsigned short int i = 65535; //only positive %d
long long int l = 9223372036854775807; //%lld 
//unsigned long long int m = 18446744073709551615llu; //%llu //only positive

float gpa = 3.141592; //%f
double d = 3.141592653589793; //have double the precision of a float //focus %lf

char grade = 'A'; //focus %c
char name[] = "Anthony"; //focus %s like s for string no string in C language
char f = 120; //%c then use asci table to coner or use %d
unsigned char g = 255;//disregarding negative numbers//%c then use asci table to coner or use %d

bool e = false; //focus %d

printf("You are %d years old\n", age);
printf("Your average score is %0.15f\n", gpa);
printf("Your average score is %0.15lf\n", d);
printf("You've scored an %c\n", grade);
printf("Your name is %s\n", name);
printf("%d\n", e);
printf("%c\n", f);
printf("%d\n", g);
printf("%d\n", h);
printf("%d\n", i);
printf("%u\n", k);
printf("%lld\n", l);
printf("%llu\n", m);


    return 0;
}


