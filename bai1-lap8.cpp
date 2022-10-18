#include<stdio.h>

int main() {
	int a, *ptr;
	ptr = &a;
	printf("Nhap so a:");
	scanf("%d", &a);
	int b;
	printf("Nhap so b:");
	scanf("%d", &b);
	printf("Gia tri cua a:%d", b);
 	printf("\nGia tri cua b:%d", a);
}
