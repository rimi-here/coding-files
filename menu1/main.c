#include <stdlib.h>
#include <stdio.h>

void display(int a[],int n);
void selection_sort(int a[],int n);
void insertion_sort(int a[],int n);
void bubble_sort(int a[],int n);


int main()
{
    int i,n,choice;

    printf("enter no of elements for sorting");
    scanf("%d",&n);
  int  arr[n];
       for(i=0;i<n;i++)
   {
        printf("Enter %d Element : ",i+1);
        scanf("%d",&arr[i]);

   }

   printf("Please select any option Given Below for Sorting : \n");


    printf("\n 3. Bubble Sort\n 1. Selection Sort\n 2. Insertion Sort\n4. Display Array.\n5. Exit the Program.\n");
       printf("enter your choice");

       scanf("%d",&choice);



  switch(choice){

      case 1:
          selection_sort(arr,n);
          break;

     case 3:
        insertion_sort(arr,n);
        break;

     /* case 3:
          insertion_sort(int a[],int n)
          break;*/
      case 4:
         display(arr,n);

    case 5:
        return 0;

    default:
        printf("\nPlease Select only 1-5 option ----\n");
    }




    return 0;
}


    void display(int a[],int n){
    for(int i=0;i<n;i++)
   {
        printf(" %d ",a[i]);
   }
    }

void selection_sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            }
        }
    printf("elements after selection sorting");
    display(a,n);
}
void insertion_sort(int a[],int n)
{
    int i,j,min;
    for(i=1;i<n;i++)
    {
        min=a[i];
        j=i-1;
        while(min<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=min;
    }
printf("After Insertion sort Elements are : ");
display(a,n);
}
void bubble_sort(int a[],int n){
    int i,j,temp;

    for(i=0;i<n;i++){

    for(j=0;j<n-i-1;j++)

    if(a[j] > a[j+1]){
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }

    }
}
    printf("elements after bubble sorting");
    display(a,n);

}

