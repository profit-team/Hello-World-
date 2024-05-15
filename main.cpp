



#include    <stdio.h>
#include   <string.h>
 
 
void foo_1(char *psz);  
void foo_2(char *psz);  



//////////////////////////////////////////////////////////
int main()                                              //
{

    char sz[19]="SONY_Pictures";
  
    foo_1(sz);  
    foo_2(sz);  
}


//  This function prints a string several times, changing its length.
//////////////////////////////////////////////////////////
void foo_1(char *psz)                                   //
{
	
    int n = strlen(psz); 
     
    for(int i=0; i < n; i++)
    {
   
        printf("%s\n", &psz[i]);
    }	
}


//  Print the line backwards
//////////////////////////////////////////////////////////
void foo_2(char *psz)                                   //
{
	
	int n = strlen(psz); 
	 
    for(int i = n-1; i >= 0; i--) {
   
        printf("%c", psz[i]);
    }	printf("\n");
}














