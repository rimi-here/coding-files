#include <iostream>
using namespace std;


#define N 8

   void printsol( sol[N][N]){



        for(int i =0 ; i < N ; i++){


          for(int j =0 ; j <N ; j++){
            cout << sol[i][j] << "  "
          }
          cout << endl;
            }





   int issafe(int x , int y  , int sol[N][N]){

     return (x >= 0 && x <N &&  y >=0  &&  y<N  && sol[x][y]== -1 );

   }

   int  solveKTutil( int x , int y , int movei , int sol[N][N]  , int x_move[N] , int y_move[N] ){


   }




   int   solveKT(){

    int sol[N][N];




    for(int i =0 ; i < N ; i++)
          for(int j =0 ; j <N ; j++)
              sol[i][j] = -1 ;



    int x_move[] = {   2 , -2 , 2 , -2 , 1 ,1 , -1 , -1 };
    int y_move[] = {  1 , 1 , -1 , -1 , 2  ,-2  , -2 , 2 };


     if(solveKTutil())
   }

int main(){

     solveKT();

  return 0 ;


}
