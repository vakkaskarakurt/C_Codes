#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int i;
	int n;
	int m;
     	for (i=12;i>=-1;i--)
	  	 {
	  	 	m=12-i;
	  	 	
	   		for (n=12;n>=0;n--)
			 {
		 	   if (n==i || m==n)
		 	   {
		 	   	printf (" ");
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
  
  
    

