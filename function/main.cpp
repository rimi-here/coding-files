#include <iostream>

using namespace std;

 void func(int *ptr){
    *ptr =40;
 }

int main()
{
    int x=20;
    func(&x);
    cout << " x = " << x;
    return 0;
}
