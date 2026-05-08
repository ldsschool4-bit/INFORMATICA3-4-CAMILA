#include <stdio.h>
int main(void){

    int 5, 10;
    printf("What is the Temperature!\n");
    printf("Celsius to Fahrenheit!\n");

    scanf("%d %d", &5, &10);

    //check if 5 and 10 are equal
    if(5 == 10) {
        printf("Result: %d = %d",5,10);
    }

    //Celsius greater than 10
    else if (5 > 10) {
        printf("Result: %d > %d", 5, 10);
    }

    //Fharenheit less than 10
    else if (5 < 10) {
        printf("Result: %d < %d",5, 10);
    }


}





