//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdlib.h>

int main(void)
{
    int s1=0 , n1=3 , n2=3 , s3=0 , b=0 , c=1, s4=0, a=1 , b1=1;
	long unsigned int s2=0;
	while(n1<36)
	{
		s1 = s1+n1;
		n1 = n1+3;
	}
	while(n2<=9876)
	{
		s2= s2+n2;
		n2= n2+3;
	}
	while(c<=12)
	{
		b= rand() %10 +1;
		s3= s3+b;
		c++;
	}
	while(b1<=20)
	{
		if(a%3==0 || a%7==0)
		{
			s4= s4+a;
			b1++;
		}
		a++;
	}
	return 0;
}
