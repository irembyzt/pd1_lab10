#include <stdio.h>

/*Enter a value from the keyboard to the 8-element float array.
 Calculate the average of the entered values and print it on the screen*/

 int main()

{
    float array[8];
    int i;
    float sum,average;

    sum=0.0;
    

    for (i=0;i<8;i++)
    {
        printf("enter your elements in the array: ");
        scanf("%f",&array[i]);

        sum += array[i];
    }

    average= sum /8;

    printf("%f",average);

    return 0;
}