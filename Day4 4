#include <stdio.h>
struct complexnum
{
   int real, img;
};
complexnum sumcomplex(complexnum a, complexnum b)
{
   struct complexnum c;
   c.real = a.real + b.real;
   c.img = a.img + b.img;
   return c;
}
int main()
{
   struct complexnum a = {1, 2};
   struct complexnum b = {4, 5};
   struct complexnum c = sumcomplex(a, b);
   printf("Complex number 1: %d + i%d\n", a.real, a.img);
   printf("Complex number 2: %d + i%d\n", b.real, b.img);
   printf("Sum of the complex numbers: %d + i%d\n", c.real, c.img);
   return 0;
}
