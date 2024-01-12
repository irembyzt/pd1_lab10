#include<stdio.h>

/*Write a program that assigns the digits of the maximum 5-digit number to an array and prints it to the screen*/

int main()
{
 int A[5];
 int i,n,m,k,c;
 printf("enter a number:");
 scanf("%d",&n);
 m=n;
 i=0;
 c=0;
 
   while (n>0)
   {
        k=n/10;
        c++;
   }
   
   if (c<=5)
   {
     while(m>0)
    { 
        A[i]=m%10;
        printf("A[%d]=%d\n",i,A[i]);
        m=m/10;
        i++;
    }

   } 
       
   return 0;
 }
 