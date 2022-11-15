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
      return sumtail(n-1, n + total);
    } else
        return 1 + total;
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert(n >= 1);
  int r = 0; //Return sum variable
  while(n > 0){ //Run loop n times (subtracting 1 each time)
    r+=n; //Add current n value to result variable
    n--;
  }
  return r; 
}

