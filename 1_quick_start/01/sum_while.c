#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, n;
  int sum;
  puts("1 ~ n 까지의 합을 구한다.");
  printf("n : ");
  scanf("%d", &n);
  sum = 0;
  i = 1;
  while (i <= n)
  {
    sum += i;
    i++;
  }
  printf("1 ~ %d sum : %d\n", n, sum);

  return 0;
}
