#include <stdio.h>
#include <stdlib.h>

int main()
{int arr[8]={6,2,7,1,4,8,3,5};

    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
   // rec_insertion(arr,8);
   sort_insertion(arr);
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
 /*   int arrt[2]={2,5};
    printf("%d %d \n",arrt[0],arrt[1]);
    int *arr_b;
    arr_b = swap_arr(&arrt[0],&arrt[1]);
    arrt[0]=*arr_b;
    arrt[1]=*(arr_b+1);
    printf("%d %d \n",arrt[0],arrt[1]);*/
    return 0;
}

void sort_insertion(int *arr){
    int key;
    for(int i =1;i<8;i++){
        key = arr[i];
        int j = i-1;
        while(arr[j]>key && j>=0){
            arr[j+1]=arr[j];
            j--;
        }arr[j+1] = key;
    }
}

void rec_bubble(int *arr,int n){
    //static n =8;
    int i,j,temp;
    if(n>0){
    for(int i =1; i<n ;i++){
        if(arr[i-1]>arr[i]){
            temp =arr[i];
            arr[i]= arr[i-1];
            arr[i-1] = temp;
        }

    }//j--;
    rec_bubble(arr,n-1);
    }

    return;
    /*
    }else{
    return;}*/
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
