#include "stack.h"

void Stack::push()
{
int value;
struct node *ptr;
cout<<"nPUSH Operationn";
cout<<"Enter a number to insert: ";
cin>>value;
ptr=new node;
ptr->data=value;
ptr->next=NULL;
if(top!=NULL)
ptr->next=top;
top=ptr;
cout<<"nNew item is inserted to the stack!!!";

}