#include<stdio.h>
#include<stdlib.h>
main()
{
int x=12, y=3; //defining x and y variables and integers 
x = x + y; //x value becomes 15
y = x - y; //y becomes x, i.e 12
x = x - y; //x becomes y, i.e 3

printf("After swapping: x=%d, y=%d", x,y);
return 0;
}
