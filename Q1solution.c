#include <stdio.h>

void reverse_number(int);
void largest_number(float, float);
void dividemulti(int);
void find_equal(int, int, int);


void main() {
    int n, num1, a1, b1, c1;
	float a,b;
	char option;
	
	printf("\n (a) Reverse Number ");
	printf("\n (b) Find Largest Number ");
	printf("\n (c) Divide/Multiply Number ");
	printf("\n (d) Compare Numbers ");
	printf("\n Select an option:\t");
    scanf("%c", &option);
	
	switch(option)
	{
		case 'a':
		{
			printf("Enter a 5 digit number to reverse:\n");
			scanf("%d", &n);
			reverse_number(n);
			break;
		}
		case 'b':
		{
			printf("Enter 2 float numbers:\n");
			scanf("%f%f", &a, &b);
			largest_number(a,b);
			break;
		}
		case 'c':
		{
			printf("Enter an integer:\n");
			scanf("%d", &num1);
			dividemulti(num1);
			break;
		}
		case 'd':
		{
			printf("Enter 3 numbers:\n");
			scanf("%d%d%d", &a1, &b1, &c1);
			find_equal(a1,b1,c1);
			break;
		}
		default:
		{
			printf("INVALID OPTION");
		}
	}
}


void reverse_number(int num)
{
	int rem=0;
	printf("Reverse Number is: \t");
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		printf("%d",rem);
	}
}

void largest_number(float a, float b)
{
	if(a>b)
	{
		printf("%f is the largest number.",a);
	}
	else
		if(a<b)
		{
			printf("%f is the largest number.",b);
		}
		
}

void dividemulti(int a)
{
	int num;
	if(a%2==0)
	{
		a=a/2;
		printf("Number is divisible by 2, result is %d.", a);
	}
	else
	{
		a=a*3;
		printf("Number is not divisible by 2, result after multiplying by 3 is %d.", a);
	}
	
}

void find_equal(int a, int b, int c)
{
	if(a==b&&a!=c||a==c&&a!=b||b==a&&b!=c||b==c&&b!=a||c==b&&a!=c||a==c&&c!=b||a==b&&a==c)
	{
		printf("\nNumbers Are Equal!");
	}
	else
	{
		printf("\nNumbers are not equal!");
	}
}
