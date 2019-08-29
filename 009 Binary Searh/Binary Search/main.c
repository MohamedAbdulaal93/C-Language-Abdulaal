#include <stdio.h>
#include <stdlib.h>

int main()
{int arr[8]={2,5,6,8,20,30,66,88};
    bin_search(arr,8,66);
    return 0;
}

int bin_search(int arr[],int len,int num){

    int index=0;
    for(int i =(len/2);i<len;){
      //  int center = len/2;
        if(num>arr[i]){
            i = i +((len-i)/2);
                //take second half

        }else if(num<arr[i]){
                // take 1st half
            i = i - ((len-i)/2);

        }else{
         //   return i;
        printf("%d ",i);
        return 0;
        }
    }


}



int swap_arr(int *arr1,int *arr2){

   /* static int arr_n[2];
    arr_n[0]=*arr2;
    arr_n[1]=*arr1;
    return &arr_n;*/

    int temp = *arr1;
    *arr1 = *arr2;
    *arr2 = temp;
}
