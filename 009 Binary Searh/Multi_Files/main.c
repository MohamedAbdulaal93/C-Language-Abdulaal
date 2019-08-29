#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    unsigned char P0:1;
    unsigned char P1:1;
    unsigned char P2:1;
    unsigned char P3:1;
    unsigned char P4:1;
    unsigned char P5:1;
    unsigned char P6:1;
    unsigned char P7:1;
//    void st *pt;
}st;

typedef union{
    unsigned char port;
    st x;

}data;
void check_endians(){
    int a = 1;  // ob0000000000000001
    if((*(char*)&a)&a == 1){
        printf("Big");
    }else{
        printf("Little");
    }
}

data DDR;

int func(){
    printf("OK");
}
#include <stdlib.h>
int (*p)();
char arr[5];
int main()
{
    int arr[]={2,3,2,3,2,3};
    int arr2[]={5,4,5,4,5,4};
    int count=0;
    int max_z=0;

    long int x = 0b1011001000101000000111000100000110;
    for(int i =0;i<32;i++){
        if((x<<i)&0x80000000){
            for(int j = i+1;j<32;j++){
                if((x<<i)&0x80000000){
                    if(count > max_z){
                        max_z = count;
                    }
                    count = 0;
                    break;
                }else{
                    count++;
                }
            }
        }


    }


    return 0;
}

int swapp(int a_s,int *a,int b_s,int *b){

    int temp,i;
    for(i=0;i<b_s;i++){
        temp = a[i];
        a[i]=b[i];
        b[i]=temp;
    }
  //  return a;

}

int funca(int size,int *arra,int num){
    int prev =0;
    int counter=0;
    int longest_count=0;
    for(int i =0;i<size;i++){
        if((arra[i]==num)){

            counter++;
            if(counter > longest_count){
                longest_count = counter;
            }
            else{
                longest_count =0;
            }

           }else{
            counter = 0;
           }


    }

return longest_count;

}


/*
 int rows = 5;
    int NomSpace;

    for(int r = 1;r<=5;r++){
        // print spaces
        NomSpace  = rows-r;
        for(int i =1;i<=(NomSpace);i++){
            printf(" ");
    }
    // print from line number to line + 1
    int NomT1 = r+rows-1;
    int temp = r;
    for(int a = 1;a<=(r);a++){
        printf("%d",temp);
        temp++;
    }
    // print triangle 3
    int start = temp-2;
    int Nom3 = r-1;
    for(int c =0;c<Nom3;c++){
        printf("%d",start);
        start--;
    }

        printf("\n");

    }




*/



/*
  char arr[9]={1,2,3,4,5,6,7,8,9};
    int NomS;
    int i, space, rows=5, s=0;
    for(i=1; i<=5; i++)
    {

      for(int j = 5;j>=i;j--){
        printf(" ");
      }
        NomS = (i*2)-1;
        int temp = i;
        int a;
        for(a =temp;a<(temp+i);a++){
           printf("%d",a);
       }
        for(int b =(a-2);b>(temp-1);b--){
           printf("%d",b);
       }

            NomS--;

     //   }
        printf("\n");
    }

*/




/*
    char arr[6]={'1','2','3','4','5','6'};
    int j=1;
    for(int i=5;i>=1;i--){
            for(int a = i;a>=1;a--){
             printf("%d ",i-a+1);
            }
            printf("\n");
    }




    char arr[5]={'*','*','*','*','*'};
    int j=1;
    for(int i=0;i<=5;i++){
            for(int a = 0;a<=j;a++){
             printf("%c",arr[a]);
            }
            j++;
            if(j==5){
                break;
            }
            printf("\n");
    }
    *
* *
* * *
* * * *
* * * * *

*/
