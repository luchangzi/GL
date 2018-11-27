//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"
#include "stdio.h"

int main(void)
{
    unsigned char i,i2,pareil,a,b,c,d,e,meilleur;
	short score[100];
	short gagnante[6];
	short jouer[6]={12,23,45,20,1,5};
	
	for(c=0;c<100;c++)
	{
		pareil=0;
		initialiserTirage(); 
	for(a=0;a<6;a++)
	{
		gagnante[a]=tirerNumero();
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
	score[c]=pareil;
	}
	meilleur = score[0]; 
	for(e=1;e<100;e++)
	 {
		if(meilleur>=score[e])
		{
			meilleur=meilleur;
		}
		else
		{
			meilleur=score[e];
		}
	 }
	
	printf("%d",meilleur);
	
	return 0;
}
