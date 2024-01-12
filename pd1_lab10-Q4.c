#include <stdio.h>

/*Write a program that takes a 10-element array from the keyboard and writes it in reverse to the screen.
(1.5,2,4,5,6,78,12,1.3 => 3.1,12,78,6,5,4,2,5,1)*/

int main(void) {

    int i,tem, a[10];

    for (i=0; i<10; i++) {

        printf("enter a number: ");
        scanf ("%d",&a[i]);

        printf("a[%d]= %d\n", i,a[i]);
    }

    for (i=0; i<5; i++) {

       tem = a[i];

        a[i]= a[9-i];

        a[9-i]= tem;
    }

    for (i=0; i<10; i++) {

        printf("a[%d]= %d \n",i,a[i]);
    }

    return 0;
}