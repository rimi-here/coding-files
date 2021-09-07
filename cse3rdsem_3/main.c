#include <stdio.h>
#include <stdlib.h>
int binarySearch( int a[] , int l, int r , int x);

int main()
  {
   /* int i,j, a[10],key=0 ,n;

    printf("Enter the Array \n");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);

    }

    printf("enter the number to search \n");
    scanf("%d" , &n);

    for(i=0;i<10;i++){

        if (a[i] == n ){
        printf(" key is present in the array \n");
        key=1;
        break;
        }

        }


     if(key == 0){
            printf(" key is not present in the array \n");
        }
    */


     int a[10],i ,n ,key ,result;

    printf("Enter the Array \n");
    for(i=0;i<10;i++){
        scanf("%d", &a[i]);

    }
         printf("enter the number to search \n");
    scanf("%d" , &key);

         n =sizeof(a[0]);
         result =binarySearch(a ,0 , n-1 , key);
         (result == -1)? (printf("Element is not present")) :(printf("Element is present"));


    return 0;
}




 int binarySearch(int a[] , int l,  int r , int x){
     int m;
      while ( r >= l){

        int m =(l+ (r-1))/2;

        if(a[m] == x){
            return m;
        }


      if(a[m] < x){
        l = m+1;
      }
      else{
            r=m-1;

      }
      }
  return -1;


 }
