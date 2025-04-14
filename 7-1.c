#include <stdio.h>
#include <ctype.h>


#define NUM_SALESPERSONS 3  // Number of salespeople


struct Person
{
    char initial;
    float totalSales;
} ;


int main() {
    struct Person salespeople[NUM_SALESPERSONS] = {
        {'D' , 0.0},
        {'E' , 0.0},
        {'F' , 0.0}
    };

    char inputInitial;
    float sale;


    printf("Please enter salesperson initial (D, E, F, or Z to quit): ");
    while (scanf(" %c", &inputInitial) && tolower(inputInitial) != 'z') { 
        inputInitial = toupper(inputInitial);  
        int found = 0;
        // Find the index of the salesperson
        for (int i = 0; i < NUM_SALESPERSONS; i++) {
            if (salespeople[i].initial == inputInitial) {
                printf("Please enter a sale amount: ");
                scanf("%f", &sale);
                salespeople[i].totalSales += sale;
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Intermediate output: Error, invalid salesperson selected, please try again and input (D, E, F, or Z to quit): ");    
        }
        printf("Please enter salesperson initial (D, E, F, or Z to quit): ");
    }

    // Grand Total and Total 
    float grandTotal = 0;
    for (int i = 0; i < NUM_SALESPERSONS; i++) {
        printf("%c: %.2f\n", salespeople[i].initial, salespeople[i].totalSales);
        grandTotal += salespeople[i].totalSales;
    }

    printf("Grand Total: %.2f\n", grandTotal);

    // Highest Sale
    struct Person highestTotal = salespeople[0];
    for (int i = 1; i < NUM_SALESPERSONS; i++) {
        if (salespeople[i].totalSales > highestTotal.totalSales) {
            highestTotal = salespeople[i];
        }
    }

    printf("Highest Sale: %c\n", highestTotal.initial);

    return 0;
}
