#include <stdio.h>
#include <string.h>


void firstChar(char *words) {
    int len = strlen(words);
    if (len > 0){
        char first = words [0];
        //move characters to the left
        for (int i = 0; i < len - 1; i++){
            words[i] = words[i+1];
        }
        //ay
        words[len -1] = first;
        words[len] = 'a';
        words[len + 1] = 'y';
        words[len + 2] = '\0';    
        //words[len] = '\0';  
      
    }
}


int main () {

    char sentence[400];
    printf("INPUT: ");
    fgets(sentence,sizeof(sentence),stdin);


    char *words = strtok(sentence, " ,\n");

    while (words != NULL) {
        firstChar(words);

        printf("%s ", words);

        words = strtok(NULL, " ,.-\n");
    }
    


   
    
    printf("\n");
    




    return 0;
    
}

