/*
#include<stdio.h>
#include<string.h>

int main() {
	char kt[80];
	printf("Moi nhap chuoi: ");
	gets(kt);
	printf("\nDo dai cua chuoi: %d", strlen(kt));
}
*/
#include<stdio.h>
#include<conio.h>

int strlen(char*);

int main() {
   char kt[20];
   int length;
   
   printf("Moi nhap chuoi: ");
   gets(kt);
   
   length = strlen(kt);
   printf("\nDo dai chuoi %s la: %d ky tu", kt, length);
  return(0);
}

int strlen(char*ptr) 
{
   int count = 0;
   while (*ptr != '\0') {
      count++;
      ptr++;
   }
   return count;
}
