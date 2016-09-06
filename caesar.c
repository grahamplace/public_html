//
//  caesar.c
//  
//
//  Author: Graham Place
//  Date Created: 8/30/16
//  Assignment 5: C Arrays
//
//  This program implements a basic caeser cipher encryption
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{

    //prompt user for message
    printf("Enter message to be encrypted: ");
    
    //declare input variables
    char input[80];
    
    int k = 0;
    for (k = 0; k < 80; k++){
        input[k] = '?';
    }
    
    int n = -1;
    
    //get user message
    fgets(input, sizeof input, stdin);
    
    //prompt shift entry
    printf("Enter shift amount (1-25):");
    scanf("%d", &n);


    //declare loop variables
    int i = 0;
    char let = '?';
    
    //encrypt based on shift value
    while (i < 80){
        
        //grab this letter
        let = input[i];
        
        //lowercase
        if(let >= 97 && let <= 122){
            input[i] = ((let - 'a') + n ) % 26 + 'a';
        }
           
        //uppercase
        if(let >= 65 && let <= 90){
            input[i] = ((let - 'A') + n ) % 26 + 'A';
        }
        
        //non-letter
        else {
        //do nothing to non-letters
        }
        
        //increment loop variable
        i++;
    }
    
    printf("%s", input);
    
}


