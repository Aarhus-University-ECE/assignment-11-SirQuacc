/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    assert (n >= 1);
    if(n == 1){
        return 1;
    } else if(n == 2){
        return 1;
    } else 
        return fib(n-1, pp+p, p);
    
}
