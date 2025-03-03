#include <stdio.h>

#define NUM_TEMPERATURES 5


float get_temperature() {
    float temp;
    
    while (1) {
        printf("Enter a temperature in Fahrenheit (-30 to 130): ");
        scanf("%f", &temp);
        
        if (temp >= -30 && temp <= 130) {
            return temp;
        } else {
            printf("Temperature out of range. Please enter a value between -30 and 130.\n");
        }
    }
}

int main() {
    float temperatures[NUM_TEMPERATURES];
    int is_warmer = 1, is_cooler = 1;
    
  
    for (int i = 0; i < NUM_TEMPERATURES; i++) {
        temperatures[i] = get_temperature();
    }

  
    for (int i = 1; i < NUM_TEMPERATURES; i++) {
        if (temperatures[i] < temperatures[i - 1]) {
            is_warmer = 0;
        }
        if (temperatures[i] > temperatures[i - 1]) {
            is_cooler = 0;
        }
    }


    if (is_warmer) {
        printf("Getting warmer");
    } else if (is_cooler) {
        printf("Getting cooler");
    } else {
        printf("It's a mixed bag");
    }

    
    printf("\nTemperatures entered: ");
    for (int i = 0; i < NUM_TEMPERATURES; i++) {
        printf("%.2f ", temperatures[i]);
    }
    

    float sum = 0;
    for (int i = 0; i < NUM_TEMPERATURES; i++) {
        sum += temperatures[i];
    }

    float average_temp = sum / NUM_TEMPERATURES;
    printf("\nAverage temperature: %.2f°F\n", "degrees");

    return 0;
}
