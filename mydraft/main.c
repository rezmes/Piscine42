#include <stdio.h>

int	main()
{
	int a;

	int *p;

	p = &a;

	a = 10;

	printf("1. The value of stored variable is: %d\n",*p);
	printf("2. The address of variable through pointer is: %p\n",(void *)p);
	printf("3. The address of variable a directely is: %p\n", &a);
	printf("4. increment of pointer p is: %p\n", (void *)(p+1));
	printf("size of integer is %zu bytes \n", sizeof(int));
	printf("value at address p is %d\n", *p);
	printf("value at address p is %d\n", *(p+1));
	return (0);
}
