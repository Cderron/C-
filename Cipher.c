#include <stdio.h>
#include <ctype.h>  


void encryptMessage(char *message, int shift) {
    // Normalize the shift to be within the range of 0-25
    shift = (shift + 26) % 26;

    for (int i = 0; message[i] != '\0'; i++) {
        
        if (isupper(message[i])) {
            message[i] = ((message[i] - 'A' + shift) % 26) + 'A';
        }
        
        else if (islower(message[i])) {
            message[i] = ((message[i] - 'a' + shift) % 26) + 'a';
        }
        
    }
}

int main() {
    char message[400]; 
    int shift;

    
    printf("Enter the message to encrypt (only alphabets allowed): ");
    fgets(message, sizeof(message), stdin);

    // shift value
    printf("Enter the shift value: ");
    scanf("%d", &shift);

    
    encryptMessage(message, shift);

   //output
    printf("Encrypted message: %s", message);

    return 0;
}
