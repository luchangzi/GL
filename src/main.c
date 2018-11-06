//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdio.h>
long int calcul_du_min (long int entier1, long int entier2);
int main(void)
{
	long int min;
	long int a;
	long int b;
	printf("premier nombre=");
	scanf("%d", &a);
	printf("deuxieme nombre=");
	scanf("%d", &b);
	min=calcul_du_min(a,b);
	printf("min=%d",min);
	return 0;
}
long int calcul_du_min(long int entier1, long int entier2)
{
	long int f;
	if(entier2 > entier1)
	{
		f=entier1;
	}
	else
	{
		f=entier2;
	}
	return f;
}
