#include <iostream>

using namespace std;


/*4 typs
   1.const_cast
  const_cast can be used to pass const data to a function that doesn’t receive const.
  fun() receives a normal pointer, but a pointer to a const can be passed with the help of const_cast.
  ex*/
  //int fun(int *ptr){

     //return(*ptr +10);

 // }

   //2.static_cast
      /*It does things like implicit conversions between types (such as int to float, or pointer to void*),
      This means that even if you think you can some how typecast a particular object int another but its illegal,
      static_cast will not allow you to do this.*/


   //3.reinterpret_cast
  /*It is used to convert one pointer of another pointer of any type,
  no matter either the class is related to each other or not.
*/


    struct mystruct{

             int x;
             int y;
             char c;
             bool b;
    };



  // dynamic_cast
int main()
{
  //1.
/* const int var=40;
  const int *ptr = &var;
     int *ptr1= const_cast<int *>(ptr);
    fun(ptr1);
    cout<< var;*/
   //The output of the program is undefined. The variable ‘var’ is a const variable and the call ‘fun(ptr1)’ tries to modify ‘val’ using const_cast.


     //2.
   /*  float a=5.78;
   int b=static_cast<int>(a);
     cout << b;*/


    // 3.

   /* int* p=new int(65);
    char* ch =reinterpret_cast<char *>(p);
    cout << *p <<endl;
    cout << *ch <<endl;*/

    mystruct s;
    s.x=5;
    s.y=10;
    s.c='a';
    s.b=true;

    //int* p=reinterpret_cast<int *>(&s);

    cout<<sizeof(s) <<endl;


       int* p=reinterpret_cast<int *>(&s);

      cout << *p << endl;
      p++;
      cout << *p << endl;
      p++;

     char *ch=reinterpret_cast<char *>(p);

     cout << *ch << endl;
     ch++;
      bool* n=reinterpret_cast<bool *>(ch);

    cout << *n << endl;


     return 0;
}
