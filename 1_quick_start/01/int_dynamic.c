#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  // int형 포인터에 메모리 할당
  int *x;
  x = calloc(1, sizeof(int));

  if (x == NULL)
  {
    puts("메모리 할당에 실패.");
  }
  else
  {
    *x = 57;
    printf("*x - %d\n", *x);
    // int형 포인터 메모리 해제
    free(x);
  }

  return 0;
}
