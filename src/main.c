//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdio.h>
#include <userint.h>

int main(void)
{
    char annee2[100],nom[100],prenom[100],prenom1[100]="prenom",nom1[100]="nom",annee1[100]="annee de naissance";
	unsigned long int annee;
	int a,b,c;
	
	printf("veuillez taper votre nom ,prenom et annee de naissance\n"); 
	scanf("%s%s%lu",nom,prenom,&annee);
	sprintf(annee2,"%lu",annee);
	printf("%s %s %lu\n",nom,prenom,annee);
	printf("je m'appelle %s %s et j'ai19ans",nom,prenom);
	a=MessagePopup(nom1,nom);
	b=MessagePopup(prenom1,prenom);
	c=MessagePopup(annee1,annee2);
	
	return 0;
}
