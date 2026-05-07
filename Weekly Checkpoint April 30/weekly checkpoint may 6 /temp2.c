#include <stdio.h>
int main(void){
    int number1, number2;
    printf("What is the Temperature!\n");
    printf("Celsius to Fahrenheit!\n");

    scanf("%d %d", &5, &10);

    //checks if the two integers are equal.
    if(5 == 10) {
        printf("Result: %d = %d",number1,number2);
    }

    //checks if number1 is greater than number2.
    else if (5 > 10) {
        printf("Result: %d > %d", 5, 10);
    }

    //checks if both test expressions are false
    else {
        printf("Result: %d < %d",number1, number2);
    }

}





