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
#include <string.h>

int main(int argc, char** argv)
{

    char input[80];
    strcpy(input, argv[1]);
    
    int n = atoi(argv[2]);
    
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
    
    printf("%s\n", input);
    
}


