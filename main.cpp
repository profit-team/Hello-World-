



#include    <stdio.h>
#include   <string.h>
 
 
void foo_1(char *psz);  
 
 



//////////////////////////////////////////////////////////
int main()                                              //
{

    char sz[19]="SONY_Pictures";
  
    foo_1(sz);  
}


//  ��� ������� �������� ������ ��������� ���, ������� � �����.
//////////////////////////////////////////////////////////
void foo_1(char *psz)                                   //
{
	
    int n = strlen(psz); 
     
    for(int i=0; i < n; i++)
    {
   
        printf("%s\n", &psz[i]);
    }	
}


















