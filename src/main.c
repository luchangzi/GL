//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdlib.h>

int main(void)
{
	unsigned char bin[10]={12,10,20,15,14,30,31,21,17,25};
	unsigned char i,seuil=16,i2,i3,x,i4,i5;
    int sat[10]={rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150,rand()%400-150};
	int SEUILH=200,SEUILB=-100;
	int dist[10]={0,12,20,30,32,34,35,40,46,50};
	int a[5]={10,4,6,7,8};
	int b[5]={7,8,9,3,4};
	int miroir[6]={1,2,3};
	for(i=0;i<10;i++)
	{
		if(bin[i]> seuil)
		{
			bin[i]=1;
		}
		else
		{
			bin[i]=0;
		}
	}
	for( i2=0;i2<10;i++)
	{
		if(sat[i2]>SEUILH)
		{
			sat[i2]=SEUILH;
		}
		else
		{
			sat[i2]=SEUILB;
		}
	}
	for(i3=0;i3<10;i3++)
	{
		if(i3>0)
		{
			x=i3-1;
			while(x>=0)
			{
				dist[i3]=dist[i3]-dist[i3-x];
				x=x-1;
			}
		}
		else
		{
			dist[i3]=dist[i3];
		}
	}
	for(i4=0;i4<5;i4++)
	{
		b[i4]=a[4-i4];
	}
	for(i5=0;i5<3;i5++)
	{
		miroir[i5+3]=miroir[2-i5];
	}
			
}


