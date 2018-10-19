//Rodrigo Perez Solis
//A01411278
//With this program the user will introduce a text and the program will give him the amount of words he introduced
#include <stdio.h>

//With this function i count the user words
int CountWords(char str[]) {
    int word = 0;
    int spc = 1;

//Loop for the characters in the string
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {

        if (str[i] != ' ' && str[i] != '\t' && spc) { //when the character is not a space and the previous character is a space
            //the word counter increments by one
            word++;
            spc = 0;

        } else if ((str[i] == ' ' || str[i] == '\t') && !spc) {
            spc = 1;
        }
    }
    return word;
}

int main() {
    char str[100];//I define the char value

    printf("Tell me something:");//I ask the user to introduce a text
    fgets(str, sizeof(str), stdin);

    printf("The text has this amount of words :%d.", CountWords(str));//Here i tell the user the amount of words he introduced
    return 0;
}