
















#include  <stdio.h>
#include <string.h>
 
char sz[19]="SONY_Pictures";

//////////////////////////////////////////////////////////
int main()                                              //
{

    int n = strlen(sz); 
     
    for(int i=0; i < n; i++)
    {
   
        printf("%s\n", &sz[i]);
    }
    
    printf("Hello, World!\n");
}













