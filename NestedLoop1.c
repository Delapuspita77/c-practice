//Dela Puspita Lasminingrum 
//22081010209 - Alpro C
//Nested Loop 1

#include <stdio.h>

int main () {
	int tinggi, i, j;
	
	printf ("Masukkan tinggi segitiga : ");
	scanf("%d",  &tinggi);
	
	for (i = 1; i <= tinggi; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf (" * ");
		}
		printf ("\n");
	}
	
	for (i = 2; i <= tinggi; i++)
	{
		for (j = tinggi; j >= i; j--)
		{
			printf (" * ");
		}
		printf ("\n");
	}
	
	return 0;
}
