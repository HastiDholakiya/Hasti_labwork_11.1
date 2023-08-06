#include <stdio.h>
 
void main()
{
   int h, d, *p1, *p2, swap;
 
   printf("Enter the value of h : \n");
   scanf("%d", &h);
   
   printf("Enter the value of d : \n");
   scanf("%d", &d);
 
 
   printf("Before Swapping\n h = %d\n d = %d\n", h, d);
 
   p1 = &h;
   p2 = &d;
 
   swap = *p2;
   *p2 = *p1;
   *p1 = swap;
 
   printf("After Swapping\n h = %d\n d = %d\n", h, d);
 
}
