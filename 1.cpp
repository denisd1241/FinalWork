#include <stdio.h>
int main()
{
 int a1 = 0;  // ѕеременна€ a используетс€ дл€ хранени€ значени€ a
 int b1 = 1;
 int  c1 = 0;
 int sum1 = 0;
 int n1 = 1;
 while (b <= 1000)
 {
  printf("%d fibonacci number - %d\n", n, b);
  n++;
  sum += b;
  c = a + b;
  a = b;
  b = c;
 }
 printf("sum = %d\n", sum);
}
