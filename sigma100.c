/* 1～100の総和を求める */
#include <stdio.h>

int main(void)
{
 
  
  int ans = 0;
  for(int i=1; i<=100; i++)
  {
    ans += i;
  }
  
  printf("%d\n", ans);
  
  return 0;
}
