#include <stdio.h>
#include <string.h>

int main() {
    char post[141];

    printf("Enter your post: ");
    fgets(post, sizeof(post), stdin); 


    int postLength = strlen(post); 

    if (postLength <= 140 || postLength >= 1){
        printf("Posted");
    } 
    else if (postLength >= 141 || postLength <= 0) {
    printf("Rejected");
    }

    return 0;
}