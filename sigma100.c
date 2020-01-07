/* 1～100の総和を求める */
#include <stdio.h>

int main(void)
{
  
  int ans = 0;
  int n=100;
  ans = n*(n+1)/2;
  
  printf("%d\n", ans);
  
  return 0;
}
