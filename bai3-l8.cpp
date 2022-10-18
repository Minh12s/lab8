#include<stdio.h>
#include<string.h>
char dx(char kt[80])
{
	int i;
	for(i = 0; i < strlen(kt) /2; i++)
	{
		if(kt[i] != kt[strlen(kt)-1-i])
		{
			return 0;
		}
	}
	return 1;
}
int main() {
	char kt[80];
	printf("Moi nhap chuoi: ");
	scanf("%s", &kt);
	if(dx(kt) == 0)
	{
		printf("Chuoi vua nhap khong phai la chuoi doi xung\n");
	}
	if(dx(kt) == 1)
	{
		printf("Chuoi vua nhap la chuoi doi xung\n");
	}
}
