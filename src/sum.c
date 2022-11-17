#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
    assert(n >= 1);
    if(n > 1){
      return sumtail(n-1, n + total); //For n's above 1, update the running total by adding n, and re-call func with n-1
    } else
        return 1 + total; //Base case, when reached, return 1 + running total
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert(n >= 1);
  int r = 0; //Sum variable to return
  while(n > 0){ //Run loop n times (subtracting 1 each time)
    r+=n; //Add current n value to result variable
    n--;
  }
  return r; 
}

