#include <iostream>

using namespace std;



class Node{

   public :

        int data ;
        Node* right ;
        Node* left;

   Node( int val){

     data = val;

     right = left = NULL ;

     }
   };




int main()
{

    Node* root = new Node(1) ;


    root->right = new Node(3) ;

    root->left = new Node(2) ;



    root->left->right = new Node(4);

    root->left->left = new Node(5);

cout << root->left->right->data <<endl;

    return 0;
}
