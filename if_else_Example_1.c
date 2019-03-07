//Created by Shashwat Raj
//A program to check if the entered no is even or odd
#include<stdio.h>
void main()
{
	int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if(num % 2 == 0)
    printf("Even number");
  else
    printf("odd number");
}
