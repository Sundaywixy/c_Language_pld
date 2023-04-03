#include <stdio.h>
/**
  * main - scanf exercise
  *
  * Return: 0.
  */

int main(void)
{
int x;
int y;

printf("Enter your age\n");
scanf("%d", &x);
printf("enter your friend's age\n");
scanf("%d", &y);

if (x > y)
{
printf("you are older than your friend\n");
}

else
{
printf("your friend is older than you\n");
}
return(0);
}
