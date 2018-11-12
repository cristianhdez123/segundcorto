#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n)
{
  if (n>2)
    return fibonacci(n-1) + fibonacci(n-2);
  else if (n==2)
    return 1;
  else if (n==1)       
    return 1;
  else if (n==0)
    return 0;
}

int main(void)
{
	int n;
	printf("\n Ingrese el numero hasta el que desea la serie fibonacci\n");
    scanf("%i", &n);
    int num;
    printf("\n Ingrese el numero hasta el que desea la serie fibonacci\n");
    for (num=0; num<=n; num++)
    {    
      printf("%d\n", fibonacci(num));
    }
    
     
  return 0;
}	
