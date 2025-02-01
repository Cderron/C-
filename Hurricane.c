#include <stdio.h>
#include <string.h>

int main(){
    int hurricane = 0;
    printf("Please input the mph: ");
    scanf("%d", &hurricane);
    
    //not a happy path
    if (hurricane <74 ) {
        printf("Not a Hurricane");
    }
    //happy path
    if (hurricane > 73 && hurricane <96){
        printf("Category One Hurricane");
    }
    //happy path
    if (hurricane > 95 && hurricane < 111) {
        printf("Category Two Hurricane");
    }
    //happy path
    if (hurricane > 110 && hurricane <130){
        printf("Category Three Hurricane");
    }
    //happy path
    if (hurricane > 129 && hurricane < 157) {
        printf("Category Four Hurricane");
    }
    //happy path
    if (hurricane > 156) {
        printf("Category Five Hurricane");
    }
    
    
    return 0;

}