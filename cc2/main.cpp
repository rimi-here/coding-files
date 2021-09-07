#include <iostream>

using namespace std;

 /*
 class car{


  private:
      int  a, b ;
  public:
     int car_id ;
     string color ;

     double  distance ;

     void display( int a , double  b ){
      cout << a << "and" << b <<endl ;
     }

 } ;
 */


 void pn(int i){
   cout << "this is int " << i<<endl ;
 }
 void pn(double b){
   cout << "this is float "<< b<< endl ;
 }

void pn(const char *a){
   cout << "this is char* " << a  << endl ;
 }
int main()
{

    /* car c1 ;
     c1.a = 10 ;
      c1.car_id = 201 ;
      c1.color = "bjhgd" ;
      c1.distance = 12;
      c1.display( c1.car_id ,  c1.distance ) ;
      */

      pn(10);
      pn(10.5) ;
      pn("ten");

   return 0;
}
