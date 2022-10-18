#include<stdio.h>

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = &arr[0];
	printf("Gia tri cua dia chi ma ptr dang tro = %d\n", *ptr);
	printf("Gia tri cua con tro ptr = %d\n", ptr);
	*ptr++;
	printf("Gia tri cua dia chi ma ptr dang tro = %d\n", *ptr);
	printf("Gia tri cua con tro ptr = %d\n", ptr);
	*ptr++;
	printf("Gia tri cua dia chi ma ptr dang tro = %d\n", *ptr);
	printf("Gia tri cua con tro ptr = %d\n", ptr);
    *ptr++;
	printf("Gia tri cua dia chi ma ptr dang tro = %d\n", *ptr);
	printf("Gia tri cua con tro ptr = %d\n", ptr);
	*ptr++;
	printf("Gia tri cua dia chi ma ptr dang tro = %d\n", *ptr);
	printf("Gia tri cua con tro ptr = %d\n", ptr);
	return 0;
}
