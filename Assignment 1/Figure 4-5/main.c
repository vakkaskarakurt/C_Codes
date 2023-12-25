#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	for(1;;)
	{
	int i;
	int n;
	int m;
	int y;
	int k;
	
	printf("Please Enter The Number: ");
	scanf("%d", &k);
	for (n=1;n<=k;n++)
	{
	    m=n+k+1;
  		for (i=1;i<=k;i++)
	  	  {
	  	  	
	  	  	y=m%(k+1);
	  	  	if (m>=2*(k+1))
			{
			y=y+1;
			}
	  	  	printf("%d", y);
			m=m+1;
		  }
     	printf("\n");
	  	    
     }
 	    
 	 printf("\n");
     }
     return 0;
  	
  }
  
  
    

