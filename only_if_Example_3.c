//Created by Shashwat Raj
//A program to check if the entered no is even
#include<stdio.h>
void main()
{
	int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if(num % 2 == 1)
  {
    num=0;
  }
  printf("Number: %d",num);
}
