#include <stdio.h>

int is_valid_temperature(int temp) {
    return (temp >= -30 && temp <= 130);  // Check if the temperature is in the valid range
}

int main() {
    int temperatures[5];  // Array to store 5 temperatures
    int i;
    
    // Get 5 valid temperatures from the user
    for (i = 0; i < 5; i++) {
        while (1) {  
            printf("Enter temperature %d (between -30 and 130): ", i + 1);
            scanf("%d", &temperatures[i]);
            
           
            if (is_valid_temperature(temperatures[i])) {
                break; 
            } else {
                printf("Temperature out of range. Please enter a value between -30 and 130.\n");
            }
        }
    }
    
    // Checking the temp.
    int getting_warmer = 1, getting_cooler = 1;

    for (i = 1; i < 5; i++) {
        if (temperatures[i] < temperatures[i - 1]) {
            getting_warmer = 0;  
        }
        if (temperatures[i] > temperatures[i - 1]) {
            getting_cooler = 0;  
        }
    }
    
    if (getting_warmer) {
        printf("\nGetting warmer");
    } else if (getting_cooler) {
        printf("\nGetting cooler");
    } else {
        printf("\nIt's a mixed bag");
    }
    
    // Temperatures
    printf("\n5-Day Temperature: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", temperatures[i]);
    }

    int sum = 0;
    for (i = 0; i < 5; i++) {
        sum += temperatures[i];
    }
    printf("\nAverage temperature: %.2f°F\n", sum / 5.0);
    
    return 0;
}
