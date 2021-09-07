#include <iostream>

using namespace std;


 class node{

 public:
   int data ;
   node* next ;
 };


   push(node** head_ref  , int new_data ){

      node* new_node = NULL ;

      new_node = new node();

       new_node -> data = new_data ;


       new_node->next =(*head_ref);

       (*head_ref) = new_node ; // moving the pointer to the head to new node so new_node is the new head



   }

   void printlist(node* n){

     while( n != NULL){

        cout <<  n->data << endl;
        n = n->next ;
     }

   }


int main()
{

    node* head = NULL ;
    node*  first  = NULL ;
    node*  second = NULL ;
    node* third = NULL ;



    head = new node();
    first = new node();
    second = new node();
    third = new node();


      head -> data = 1;
      head ->next = first ;

      first-> data = 2;
     first->next = second ;


      second-> data = 3;
      second->next =third ;



      third-> data = 4;
      third->next = NULL;
      push(&head , 6 );
      printlist(head) ;

    return 0;
}
