#include <iostream>

using namespace std;

int main()
{
    int arr1[]={1,5,6,10,20,30};

    for(int i=0; i<6; i++){
           switch( arr1[i]) {

case 1  ... 6:
    cout << "\n %d is in range 1 to 6 "<< arr1[i];
     break;
case 7 ... 20:
      cout <<"\n %d is in range 7 to 20" << " " ;
    break;

default:
   cout <<" \n %d is in not in range "<< " ";
     break;
}
    }
    return 0;
}
