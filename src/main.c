//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdio.h>
#include <userint.h>
int main(void)
{
	int i,a,b,c,d;
	char ligne1A[80]= "Nom: triangle_A";
	char ligne2A[80]= "Nb points: 3";
	char ligne3A[80]= "Cordonnees: 10 20 30 20 30 40 -1 -1 -1 -1";
	char ligne1B[80]= "Nom: Pentagone_B";
	char ligne2B[80]= "Nb points: 5";
	char ligne3B[80]= "Cordonnees: 10 20 30 20 30 40 43 53 35 65";
	char nom_figA[80],nom_figB[80],affiche[80],affiche2[80],erreur[80],erreur2[80]="erreur!",A[80]="A",B[80]="B";
	int x1[5]={0,0,0,0,0},y1[5]={0,0,0,0,0},x2[5]={0,0,0,0,0},y2[5]={0,0,0,0,0};
	int nb_ptsA,nb_ptsB;
	sscanf(ligne1A,"%*s %s" , nom_figA);
	sscanf(ligne2A,"%*s %*s %d" ,&nb_ptsA);
	sscanf(ligne3A,"%*s %d %d %d %d %d %d %d %d %d %d",&x1[0],&y1[0],&x1[1],&y1[1],&x1[2],&y1[2],&x1[3],&y1[3],&x1[4],&y1[4]);
	 sscanf(ligne1B,"%*s %s" , nom_figB);
	sscanf(ligne2B,"%*s %*s %d" ,&nb_ptsB);
	sscanf(ligne3B,"%*s %d %d %d %d %d %d %d %d %d %d",&x2[0],&y2[0],&x2[1],&y2[1],&x2[2],&y2[2],&x2[3],&y2[3],&x2[4],&y2[4]);
	for(i=0;i<5;i++)
	{
		if(x1[i]==-1)
		{
			sprintf(erreur,"x1[%d]",i);
			a=MessagePopup(erreur,erreur2);
		}
	}
	for(i=0;i<5;i++)
	{
		if(y1[i]==-1)
		{
			sprintf(erreur,"y1[%d]",i);
			b=MessagePopup(erreur,erreur2);
		}
	}
	sprintf(affiche,"la figure %s possede %d sommets",nom_figA,nb_ptsA);
	c=MessagePopup(A,affiche);
	sprintf(affiche2,"la figure %s possede %d sommets",nom_figB,nb_ptsB);
	d=MessagePopup(B,affiche2);
	
	return 0;
	
}
