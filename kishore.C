#include<stdio.h>

int main() {
   int num;
   printf("enter the number: \n",num);
   scanf("%d",&num);
   if((num%2)==0)
   printf("%d the number is even",num);
   else
   printf("%d the number is odd",num);
   return 0;
}
