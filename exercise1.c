#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,a,b,sum = 0;

	printf("Enter an integer\n");
	scanf("%d", &n);
	
	a = n;
	while (a != 0)
	{
		b = a % 10;
		sum = sum + b;
		a = a/10;
		
	}
	printf("Sum of digits of %d = %d\n", n,sum);
	return 0;

}
