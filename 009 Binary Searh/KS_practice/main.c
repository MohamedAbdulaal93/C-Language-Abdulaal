#include <stdio.h>
#include <stdlib.h>

float x = 118.625;
enum x{a,b,c,d,e,f};
char arr[10]={0,1,2,3,4,5,6,7,8,9};

#pragma asdf

void rec(int i){
    for(i; i<9;i++){
         printf("%d ",i);
    }
    printf("\n");
}
#include "test.h"
#define concat(a, b) a##b
#define stra(s)  #s

enum en{a1,b1,c1,d1,e1};

//extern int var=5;
//int sub(int x,int y);
int main(void)
{
   // var = 10;

	int xy = 30;
	//var=20];
	printf("%d ",sub(7,3));
	return 0;
}




int bit_return(int a, int loc)
{
    int buf = a & 1<<loc;

    if (buf == 0) return 0;
    else return 1;
}
