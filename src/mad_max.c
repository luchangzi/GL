#include "mad_max.h"

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
