#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define NUM_SALESPERSONS 3

struct Person {
    char initial;
    float totalSales;
};

int main() {
    FILE *fptrOutput;

    struct Person salespeople[NUM_SALESPERSONS] = {
        {'D', 0.0},
        {'E', 0.0},
        {'F', 0.0}
    };

    char inputInitial;
    float sale;

    printf("Enter salesperson initial (D, E, F) or Z to stop:\n");
    while (scanf(" %c", &inputInitial) && toupper(inputInitial) != 'Z') {
        inputInitial = toupper(inputInitial);

        if (inputInitial != 'D' && inputInitial != 'E' && inputInitial != 'F') {
            printf("Invalid initial. Please enter D, E, F, or Z to quit:\n");
            continue;
        }

        printf("Enter sale amount: ");
        if (scanf("%f", &sale) != 1) {
            printf("Invalid sale amount. Try again.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        // Add sale to the appropriate person
        for (int i = 0; i < NUM_SALESPERSONS; i++) {
            if (salespeople[i].initial == inputInitial) {
                salespeople[i].totalSales += sale;
                break;
            }
        }

        printf("Enter salesperson initial (D, E, F) or Z to stop:\n");
    }

    // Write results to Results.txt 
    fptrOutput = fopen("Results.txt", "w");
    if (fptrOutput == NULL) {
        printf("ERROR: Could not open Results.txt for writing.\n");
        return 1;
    }

    float grandTotal = 0.0;
    for (int i = 0; i < NUM_SALESPERSONS; i++) {
        fprintf(fptrOutput, "%c: %.2f\n", salespeople[i].initial, salespeople[i].totalSales);
        grandTotal += salespeople[i].totalSales;
    }

    fprintf(fptrOutput, "Grand Total: %.2f\n", grandTotal);

    struct Person highest = salespeople[0];
    for (int i = 1; i < NUM_SALESPERSONS; i++) {
        if (salespeople[i].totalSales > highest.totalSales) {
            highest = salespeople[i];
        }
    }

    fprintf(fptrOutput, "Highest Sale: %c\n", highest.initial);
    fclose(fptrOutput);

    printf("Results written to 'Results.txt'\n");

    return 0;
}
