#include "main.h"

/**
 * main - Entry point
 * Return:Always 0
 */
int main(void)
{
	int a, b;

	printf("Enter Value of a ");
	scanf("%d", &a);
	printf("\nEnter Value of b ");
	scanf("%d", &b);

	int temp = a;

	a = b;
	b = temp;

	printf("\nAfter Swapping: a = %d, b = %d", a, b);
	return (0);
}
