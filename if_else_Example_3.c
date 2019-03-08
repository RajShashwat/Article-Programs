//Created by Shashwat Raj
//A program to check num1 is greater than num2 if it is swap it else multiply it by 5
#include<stdio.h>
void main()
{
	int num1,num2,temp;
  printf("Enter 2 number: ");
  scanf("%d%d", &num1,&num2);
  if(num1 > num2)
  {
      temp=num1;
      num1=num2;
      num2=temp;
  }
  else
  {
      num1=num1*5;
      num2=num2*5;
  }
  printf("%d/t%d",num1,num2);
}
