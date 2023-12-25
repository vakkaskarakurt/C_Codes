#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h> 

int main( void )
{
	int digits;
	int i;
	time_t t;
	int m;
	
   printf("---------------------------------------------\n");
   printf("--------      NUMBER GUESS GAME      --------\n");
   printf("---------------------------------------------\n");
   printf("Enter the number of digits for the game 4-10= ");
   scanf("%d", &digits);
   
   int array[digits];
   
   srand((unsigned) time(&t));
   
   array[0]=(rand() % (9 - 1 + 1)) + 1;
   
   for(i=1; i<digits; i=i+1)
   {
   	array[i]=rand()%10;
   }
   
   
   
   for (m=0; m<digits; m=m+1)
   {
   	for(i=1; i<digits; i=i+1)
   	{
     	if (array[m]==array[i] && m!=i)
	  	 {
	  		while(array[m]==array[i])
	   	{  
   	   		array[i]=rand()%10;
   	   	 }
       }
   	}
  }
  
  int correctplace=0, wrongplace=0;
  int guessarray[digits];
  int guess;
  int z=digits-1;
  int remainder;
  int counter=0;
  int guesses[10000];
  int n,j,temp;
  
  printf("\n");
  while (correctplace!=digits)
  {
  	
    printf("Enter a guess=");
 	scanf("%d", &guess);
 	guesses[counter]=guess;
 	counter=counter+1;
 	
 	
	 
	  for (i=0; i<digits; i=i+1)
 	 {
  		remainder=guess%10;
  		guessarray[z]=remainder;
  		guess=guess-remainder;
  		guess=guess/10;
  		z=z-1;
 	 }
 	 z=digits-1;
  
  
 	 for(i=0; i<digits; i=i+1)
 	{
  		if(array[i]==guessarray[i])
		{
  		 correctplace=correctplace+1;
 		}
 	 }
  
	for (m=0; m<digits; m=m+1)
  	 {
   		for(i=0; i<digits; i=i+1)
  	 	{
   	  if (array[m]==guessarray[i] && m!=i)
   	     {
   	      wrongplace=wrongplace+1;
		 }
   		}
 	 }
 	 
    
 	
 	 printf("+%d-%d\n",correctplace,wrongplace);
 	 
 	 
 	 
 	 if(correctplace==digits)
 	 {
 	 	printf("Congratz you won the game\n");
 	 	printf("Total Numbers of tries=%d\n",counter);
 	 	for (n=0; n<counter-1; n=n+1 )
 	    	{
 	 		 for(j=0; j<counter-n-1; j=j+1)
 	 		 	{
 	 		 		if(guesses[j]>guesses[j+1])
 	 		 		{
 	 		 			temp=guesses[j+1];
 	 		 			guesses[j+1]=guesses[j];
 	 		 			guesses[j]=temp;
					   }
				   }
		     }
		     
	    printf("All guesses from smallest to largest:");
 	 	for(i=0; i<counter; i=i+1)
 	 	{
 	 		
 	 		printf("%d ", guesses[i]);
 	 		
		}
 	 	return 0;
	  }
	  
 	 correctplace=0;
 	 wrongplace=0;
 	 
 	 
 	}
 	
 	
}
 	
 	
 	
 	
 	

 	
 	
 	
 	
 	
 	
 	
 	


