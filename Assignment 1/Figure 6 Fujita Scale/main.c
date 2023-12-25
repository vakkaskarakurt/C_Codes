#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	for(1;;)
	{
	int i;
	
	printf("Please enter the current wind speed (km/h): ");
	scanf("%d", &i);
	
	switch(i)
	{
		case 65 ... 117:printf("Class: F0\nWind Speed Range: 65-117 km/h\nObserved damage: Minor"); break;
		case 118 ... 180:printf("Class: F1\nWind Speed Range: 118-180 km/h\nObserved damage: Weak"); break;
		case 181 ... 252:printf("Class: F2\nWind Speed Range: 181-252 km/h\nObserved damage: Strong"); break;
		case 253 ... 333:printf("Class: F3\nWind Speed Range: 253-333 km/h\nObserved damage: Severe"); break;
		case 334 ... 419:printf("Class: F4\nWind Speed Range: 334-419 km/h\nObserved damage: Devastating"); break;
		case 420 ... 511:printf("Class: F5\nWind Speed Range: 420-511 km/h\nObserved damage: Incredible"); break;
		case 512 ... INT_MAX:printf("Class: F6\nWind Speed Range: Above 511 km/h\nObserved damage: Unthinkable"); break;
		default: printf("The value you entered is not in the fujita scale, please enter a different value."); break;
	}
	printf("\n\n");
 	}
	 return 0;
  	
  }
  
  
    

