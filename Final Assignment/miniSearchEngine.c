#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int search (char*searchword, char arr[1000][30],int b);
int i=0;
int main()
{
	FILE* ptr;
	FILE* ign;
	FILE* fptr;
	char filename[100],searchword[100],line[100];
	char delim[] = ", \n \t \r .  \n\n";
	char *ptrDelimeter,*ignDelimeter;
	char r[30],temp[30],ch;
	int j=0,k=0,m=0,c1,c2,a,b,l=0,x=0,y=0,freqarray[1000],result,d;
	char arr[1000][30],arr2[1000][30],ignarr[1000][30];
	
	printf("Please enter the file name to read: "); //Get a file name as input
	scanf("%s", &filename);
	strcat(filename,".txt");
	ptr = fopen (filename, "r"); //Read all words in the input file document.
	
	
	while (d!=0) //Loop for true filename
	{
		if(ptr==NULL);	
		{  
			printf("file can't be opened \n");
			printf("Please enter the file name to read: "); 
			scanf("%s", &filename);
			strcat(filename,".txt");
			ptr = fopen (filename, "r"); 
		}	
		if(ptr!=NULL)
		{
			d=0;
		}
	}
	
	
	while (fgets(line, sizeof(line), ptr)) //Store all words in an array 
	{
		ptrDelimeter = strtok(line, delim);
			while(ptrDelimeter != NULL)
			{	
			    strcpy(arr[i++],ptrDelimeter);
				ptrDelimeter = strtok(NULL, delim);
			}
			
	}	
	fclose(ptr);
	
	ign = fopen("ignoreList.txt", "r"); //Read all ignoreList words in the input file document.
	while (fgets(line, sizeof(line), ign)) //Store all ignoreList words in an array
	{
		ignDelimeter = strtok(line, delim);
			while(ignDelimeter != NULL)
			{	
			    strcpy(ignarr[k++],ignDelimeter);
				ignDelimeter = strtok(NULL,delim);
			}
			
	}	
   fclose(ign);
	
	 
	for (c1=0;c1<=i;c1++) // ignore the words in which are on the ignore list
	{
		for(c2=0;c2<=k;c2++)
		{
			if(strcmp(arr[c1],ignarr[c2])==0 )
				{
					strcpy(arr[c1],"");
				}
		}
	}
	
	
  	for (j=0;j<=i;j++)
	{
		freqarray[j]=0;
	}
	
	for(j=0;j<=i;j++) //Find the frequency count of all words
	{   
		for(m=0;m<=i;m++)
		{
			if(strcmp(arr[j],arr[m])==0)
			{
				freqarray[j]=freqarray[j]+1;
			}
				
		}
		
	}
	
	for(m=0;m<=i;m++) //Print all the words and their frequencies
	{
		if(strcmp(arr[m],"")!=0)
		printf("%s,%d\n", arr[m],freqarray[m]);
	}
	
	fptr = fopen("words.txt","w"); //print then output to “words.txt” file.
	
		for(j=0;j<=i;j=j+1)
		{   
			if (strcmp(arr[j],"")!=0)
			{
				fprintf(fptr, "%s,%d\n", arr[j],freqarray[j]);
					
			}
		
		}
	
	for(m=0;m<=i;m++) //new array for sort
	{
		strcpy(arr2[m],arr[m]);
	}
	
	for(m=0;m<i;m++) //Sort the word list alphabetically applying a sorting algorithm
	{
    	for(j=0;j<=i;j++)
		{
       		 if(strcmp(arr2[j], arr2[m]) > 0)
			  {
        		strcpy(temp, arr2[m]);
        		strcpy(arr2[m], arr2[j]);
        		strcpy(arr2[j], temp);
      		  }
    	}
  	}
	
	for(m=0;m<=i;m++) //new array for sort
	{
		printf("\n-%s",arr2[m]);
	}
	
	printf("\n");
	
	while (strcmp(searchword,"0")!=0)
	{
		printf("(0 for exit) Enter a search string: "); //Ask user “Enter a search string:”.
		scanf("%s", &searchword);
		
		int h=0;
		result=search(searchword,arr2,h);
		
		if(result!=-1)
		  	{
		  		printf("The word - %s - Exists in the file\n",arr2[result-1]);
			}
			else if (result==-1)
			{
				printf("The word is not in the file\n");
			}
	}
	
	printf("--End--");
	
	return 1;
}

int search (char*searchword, char arr[1000][30],int b) //recursive search algorithm
	{
		if(strcmp(arr[b++],searchword)==0)
		{
			return b;
		}
		else if(b==i)
		{
			return -1;
		}
		else
		{
			return search(searchword,arr,b);
		}
	}
