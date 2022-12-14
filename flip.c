#include <stdio.h>

int countSetBits(int );
int flip(int , int );

int main()
{
	int a , b;
	printf("enter the a and b values\n");
	scanf("%d%d",&a,&b);
	printf("%d\n", flip(a, b));
	return 0;
}
int flip(int a, int b)
{
	return countSetBits(a ^ b);      //return count of set bits in a ^ b
}

int countSetBits(int n)
{
	int count = 0;
	while (n > 0) {
		count++;
		n &= (n - 1);
	}
	return count;
}
