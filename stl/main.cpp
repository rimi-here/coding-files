#include <iostream>

using namespace std;


template <class T >
      T myMax (T x ,T y){
          return x > y ? x : y ;
      }

 int main(){

   cout <<  myMax <int> (3 , 5) << endl;

   cout <<  myMax <int> (7 , 5) << endl;

   cout <<  myMax <int> (3 , 9) << endl;
    return 0;
}
