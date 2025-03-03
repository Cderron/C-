#include <stdio.h>
#include <ctype.h>


#define NUM_SALESPERSONS 3  // Number of salespeople

int main() {
    float sales [NUM_SALESPERSONS] = {0.0, 0.0, 0.0};
    char people [NUM_SALESPERSONS] = {"D, E, F"};
    char initial;   
    float sale;
    int index = -1;


    printf("Please enter salesperson initial (D, E, F, or Z to quit): ");
    while (scanf(" %c", &initial) && tolower(initial) != 'z') { 
        initial = toupper(initial);  
        // Find the index of the salesperson
        for (int i = 0; i < NUM_SALESPERSONS; i++) {
            if (people[i] == initial) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            //happy path
            printf("Please enter sale amount: ");
            scanf("%f", &sale);
            sales[index] += sale;
        } else {
            // unhappy path
            printf("Intermediate output: Error, invalid salesperson selected, please try again and input (D, E, F, or Z to quit): ");
        }

        printf("Please enter salesperson initial (D, E, F, or Z to quit): ");
    }

    // Grand Total and Total 
    float grandTotal = 0;
    for (int i = 0; i < NUM_SALESPERSONS; i++) {
        grandTotal += sales[i];
        printf("%c: %.2f\n", people[i], sales[i]);
    }

    printf("Grand Total: %.2f\n", grandTotal);

    // Highest Sale
    float highestTotal = sales[0];
    char highestSeller = people[0];
    for (int i = 1; i < NUM_SALESPERSONS; i++) {
        if (sales[i] > highestTotal) {
            highestTotal = sales[i];
            highestSeller = people[i];
        }
    }

    printf("Highest Sale: %c\n", highestSeller);

    return 0;
}
