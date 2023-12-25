#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	float x, y, sum,n,i ;
	for (1;;)
	{
	float sum1=0, sum2=0;
	printf("Please enter the integer domain of f function: ");
	scanf("%f", &n);
	
	for(i=1; i<=n; i+=2)
	{
	 y=(1/i)*(1/i);
	 sum1=sum1+y;	
	}
		
	for(i=2; i<=n; i+=2)
	{
	 x=(1/i)*(1/i);
	 sum2=sum2+x;	
	}
	
	sum=sum1-sum2;
	
	printf("f(%.0f) is equal to %.4f.", n, sum);
	printf("\n\n");
	
	}	    
     return 0;
  	
}

  
  
    

