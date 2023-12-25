#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int i;
	int n;
	int m;
     	for (i=0;i<5;i++)
	  	 {
	  	 	m=6-i;
	  	 	for (n=0;n<9;n++)
		  {
		  	if (n<i || m<n-2)
		  	{
		  	 printf(" ");	
			  }
		  	else
		  	{
		  		printf("*");
			  }
		  }
		 	 printf ("\n");
	     }
 	
     return 0;
  	
  }
  
  
    

