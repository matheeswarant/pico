#include<stdio.h>

int main() {
   char v;
   printf("enter the input: \n",v);
   scanf("%c",&v);
   	if(v=='a'||v=='A'||v=='e'||v=='E'||v=='i'||v=='I'||v=='o'||v=='O'||v=='u'||v=='U')
   	printf("%c vowels",v);
   	else
   	printf("%c consonant",v);
   return 0;
  
}
