#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	for(1;;)
	{
	int i, k, temp, m, sum=0, n, y ;
	
	printf("Please enter first integer: ");
	scanf("%d", &i);
	printf("Please enter second integer: ");
	scanf("%d", &k);
	
	if (k>i)
	{
		temp=i;
		i=k;
		k=temp;
	}
	
	if(k<=1)
	{
		k=2;
	}
	for(m=k; m<=i; m++)
	{
		y=0;
		for(n=2; n<m; n++)
		{
			if(m%n==0)
			{
				y=1;
				break;
			}
		}
		
		if(y==0)
		{
			sum=sum+m;
		}
	}
	printf("The sum of prime numbers in two ranges of values entered [%d,%d] is equal to %d.", k,i,sum);
	printf("\n\n");
	}
		     
     return 0;
  	
}

  
  
    

