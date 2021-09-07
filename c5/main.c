#include <stdio.h>
#include <stdlib.h>

int max(int a[]  ,int  n){
    int max = 0 ,i;
    for(i=0;i<n;i++){
            if (max < a[i]){
                 max = a[i];
            }

    }
    return max;
}

int min(int a[] ,int n ){
    int min=57567463 ,i;
    for(i=0;i<n;i++){

            if (min > a[i]){
                min = a[i];
            }
    }
     return min;
}

int main()
{

    /*int a[10] ,i;
    printf("the array : \n");
     for(i=0;i<10;i++){
       scanf("%d",&a[i]);
     }

   printf("array in the reverse order \n");
   for(i=9;i>=0;i--){
    printf("%d \n",a[i]);
   } */


    int arr[10] ,i ,max1 ,min1 ,size=10;
    printf("the array : \n");
     for(i=0;i<size;i++){
       scanf("%d",&arr[i]);
     }

     max1= max(arr ,size);
     min1=min(arr , size);
        printf("maximum element of the array :%d \n",max1);
       printf(" minimum element of the array :%d \n",min1);


    return 0;
}
