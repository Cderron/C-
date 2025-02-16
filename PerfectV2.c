#include <stdio.h>
#include <string.h>


void perfectNumber(){
    int perfectNumber = 0;
    printf("Please input a perfect number: ");
    scanf("%d", &perfectNumber);
    
    //happy path
    if (perfectNumber == 6 || perfectNumber == 28 || perfectNumber == 496 || perfectNumber == 8128 ){
        printf("Perfect Number");
    }
     //not happy path
    else if (perfectNumber < 6 ) {
        printf("Not A Perfect Number");
    }
    //not happy path
    else if (perfectNumber > 6 ) {
        printf("Not A Perfect Number");
    }
    //not happy path
    else if (perfectNumber < 28) {
        printf("Not A Perfect Number");
    }
    //not happy path
    else if (perfectNumber < 28 ) {
        printf("Not A Perfect Number");
    }
    //not happy path
    else if (perfectNumber < 496) {
        printf("Not A Perfect Number");
    }
    //not happy path
    else if (perfectNumber > 496) {
        printf("Not A Perfect Number");
    }
    //not happy path
    else if (perfectNumber < 8128) {
        printf("Not A Perfect Number");
    }
    //not happy path
    else if (perfectNumber > 8128) {
        printf("Not A Perfect Number");
    }

}

int main(void){
    perfectNumber();
    return 0;
}