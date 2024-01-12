#include <stdio.h>

/*Write a program that transfers the numbers given until -1 is entered from the keyboard, 
 and then prints the square of each element to the screen. 
(The number of array elements will be maximum 10.)*/

int main()

{
    int A[10],n,f,i,j;

    for ( i = 0; i <10; i++)
    {
        printf("\nenter a number: ");
        scanf("%d",&n);
        if (n==-1)
        {
           i=10;
        } 
        
        else
        {
            A[i]=n;
            printf("A[%d]=%d\n",i,n);
           f=n*n;
            printf("A[%d]= %d",i,f);
            
        } 
        
    }
  return 0;





}