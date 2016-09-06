//
//  randomwalk.c
//
//
//  Author:        Graham Place
//  Date Created:  8/30/16
//  Assignment:    Assignment 5: C Arrays
//
//  To Compile:    gcc randomwalk.c -o rw
//  To Run:        ./rw
//

// standard include
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//main function
int main(int argc, char** argv)
{
    
    //declare 2d array
    char path[10][10];
    
    //declare loop vars
    int i = 0;
    int j = 0;
    
    //set array vals to '.'
    for (i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            path[i][j] = '.';
        }
    }
    
    char let = 'A';
    int dir;
    i = 0;
    j = 0;
    int check = 0;
    
    path[0][0] = 'A';
    
    for(let = 'B'; let <= 'Z'; let++){
        
        //reset possible moves
        int possible[4] = {1,1,1,1};
        check = 0;
        
        //check all 4 moves for this location
        //up
        if(i == 0 || path[i-1][j] != '.'){
            possible[0] = 0;
            check++;
        }
        //right
        if(j == 9 || path[i][j + 1] != '.'){
            possible[1] = 0;
            check++;
        }
        //down
        if(i == 9 || path[i + 1][j] != '.'){
            possible[2] = 0;
            check++;
        }
        //left
        if(j == 0 || path[i][j - 1] != '.'){
            possible[3] = 0;
            check++;
        }
        
        //check for total block:
        if(check == 4){
            break;
        }
        
        //not blocked
        //generate random path
        srand((unsigned) time(NULL));
        dir = rand() % 4;
        
        //loop to find first possible move
        int l = 1;
        while(l == 1){
            if(possible[dir] == 1){
                break;
            }
            else {
                dir = rand() % 4;
                continue;
            }
        }
        
        //dir is now set, time to 'move'
        //up
        if(dir == 0){
            path[i - 1][j] = let;
            i--;
        }
        //right
        else if(dir == 1){
            path[i][j+1] = let;
            j++;
        }
        //down
        else if(dir == 2){
            path[i + 1][j] = let;
            i++;
        }
        //left
        else if(dir == 3){
            path[i][j-1] = let;
            j--;
        }
        
     } //end alphabet for loop
    
    
    //print path
    for (i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%c", path[i][j]);
        }
        printf("\r\n");
    }
    
    
    //return 0 to end main
    return 0;
    
}