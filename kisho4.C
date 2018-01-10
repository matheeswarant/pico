#include<stdio.h>

int main() {
   char v;
   printf("enter the input: \n",v);
   scanf("%c",&v);
   	if((v>='a'&&v<='z')||(v>='A'&&v>='Z'))
   	printf("%c alphabets",v);
   	else
   	printf("%c no",v);
   return 0;
  
}
