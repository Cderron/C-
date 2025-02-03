#include <stdio.h>
#include <ctype.h>

int main() {
    float danielleTotal = 0, edwardTotal = 0, francisTotal = 0, grandTotal = 0;
    char intial;
    float sale;
//happy path
    printf("Please enter salesperson initial (D, E, F, or Z to quit): ");
    while (scanf("%c", & intial) && tolower(intial) != 'z') {
        switch (tolower(intial)) {
            case 'd':
                printf("Please enter sale amount: ");
                scanf("%f", &sale);
                danielleTotal += sale;
                break;
            case 'e':
                printf("Please enter sale amount: ");
                scanf("%f", &sale);
                edwardTotal += sale;
                break;
            case 'f':
                printf("Please enter sale amount: ");
                scanf("%f", &sale);
                francisTotal += sale;
                break;
//not happy path
            default:
                printf("Intermediate output: Error, invalid salesperson selected, please try again and input (D, E, F, or Z to quit): ");
        }

        printf("Please enter salesperson initial (D, E, F, or Z to quit): ");

        }
//Grand Total and Total for each individual
    grandTotal = danielleTotal + edwardTotal + francisTotal;
    printf("Danielle: %.2f\n", danielleTotal);
    printf("Edward: %.2f\n", edwardTotal);
    printf("Francis: %.2f\n", francisTotal);

    printf("Grand Total: %.2f\n", grandTotal);

    float highestTotal = danielleTotal;
    char highestSeller = 'D';
    if (edwardTotal > highestTotal){
        highestTotal = edwardTotal;
        highestSeller = 'E';
    }

    if(francisTotal > highestTotal) {
        highestSeller = 'F';
    }
    printf("Highest Sale: %s\n", &highestSeller);

    return 0;
}