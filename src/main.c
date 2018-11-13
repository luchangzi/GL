//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"
#include <stdio.h>

int main(void)
{
	short int resultat=0 , i=0;
	printf("its your turn!");
	i= LancerDe();
	if(i==1)
	{
		printf("you lose! its not your turn for now!");
	}
	else
	{
	    while(i!=1)
	{
		if(i==2||i==4||i==6)
		{
			resultat= resultat+i;
		}
		else if(i==3)
		{
			resultat= resultat * 3;
		}
		else if(i==5&&resultat>=2)
		{
			resultat= resultat-2;
		}
		else if(i==5&&resultat<2)
		{
			i=LancerDe();
		}
		i=LancerDe();
	}
	printf("you lose! its not your turn for now!your score is %d",resultat);
	return 0;
	}
}