#include <stdio.h>
#include <string.h>

int main(void)
{
 char a[4];
 int n;

 a[0] = 'a';
 a[1] = 'b';
 a[2] = 'c';
 a[3] = '\0';

 printf("%s\n", a);

 n = strlen(a);

 printf("%d\n", n);

 return 0;
}