#include <stdio.h>
#include <stdlib.h>

int someRandomMethod(int* result1,int* result2)
{

	*result2 = 55;
	*result1 = 33;
//	printf("\nThe value of b is: %d\n" , b);
	//return &b;
}

int main()
{

    char *arr[]={"EC1 11","Embedded","Software","Development"};
    const char ** pt = &arr;
    signed char t = 0xFE;
    int y = (0x21 >>4);
    y = y<<3;
    printf("%d  ",(0&~26|0<<4));
    /*
    unsigned long int a =5;
    unsigned long int *b=&a;
    unsigned long int c = *b;
    a =7;*/
   // printf("%lu %lu ",*b,c);
   printf(" %x",((2<<6)|(2<<4)|(1<<2)|(0)));
	return 0;
}
