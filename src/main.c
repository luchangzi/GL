//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"
#include "stdio.h"

int main(void)
{
    unsigned char i,i2,pareil=0,a,b;
	short gagnante[6];
	short jouer[6];
	
	initialiserTirage(); 
	for(a=0;a<6;a++)
	{
		gagnante[a]=tirerNumero();
	}
		
	initialiserTirage();

	for(b=0;b<6;b++)
	{
		jouer[b]=tirerNumero();
	}
	

	for(i=0;i<6;i++)
	{
		for(i2=0;i2<6;i2++)
		{
			if(jouer[i]==gagnante[i2])
			{
				pareil++;
			}
		}
	}
	printf("%d",pareil);
	
	return 0;
}
