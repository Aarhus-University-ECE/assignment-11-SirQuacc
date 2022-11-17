#include "sumn.h"
#include <assert.h>
#include<stdio.h>

int sumn (int n) //Squares the input
{
    assert(n >= 1);
    if(n == 1){ // Base case
        return 1; //2*1-1 = 1
    }
    else{
        return 2*n-1 + sumn(n-1); //Recursive step 2*n-1 + 2*(n-1)-1 and so on.
    }
}