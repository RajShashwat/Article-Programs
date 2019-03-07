//Created by Shashwat Raj
//A program to convert odd no to 0
#include<stdio.h>
void main()
{
	int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if(num % 2 == 1)
    num=0;
  printf("Number: %d",num);
}
