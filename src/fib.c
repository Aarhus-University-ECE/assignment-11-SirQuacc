/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp) //Use: n is the index of the fib number you want, f.x. number 4 in the sequence, p = 1, pp = 0.
{
    assert (n >= 1);
    if(n == 1){
        return pp; //If input is simply 1, return pp, should be 0.
    } else if(n == 2){
        return p; //If input is 2 (can happen recursively), return the new p value
    } else 
        return fib(n-1, pp + p, p); //If we want a number in the sequence later than 2, call fib again with updated p and pp as running sums.
}
