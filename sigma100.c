/* 1～100の総和を求める */
#include <stdio.h>

int sum(int num){
	return num*(num+1)/2;
}

int main(void)
{  
  int num = 100;
  int ans = sum(num);
  
  printf("%d\n", ans);
  
  return 0;
}
