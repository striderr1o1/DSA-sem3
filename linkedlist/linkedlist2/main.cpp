#include <iostream>
using namespace std;
void insert(int x);
void Delete();
void display();
struct List{
int item;
List * next;
};
List * head = NULL;
int main(){

insert(10);
display();
cout << endl;
insert(35);
display();
cout << endl;
cout << "Deleting\n";
Delete();
display();
}
void insert(int x){
List * temp = new List;
temp->item = x;
if (head== NULL){
temp->next = NULL;
head = temp;
}
else{
temp->next=head;
head = temp;
}
}
void Delete(){
List* temp = head;
if (head == NULL){
return;
}
else{
head = head->next;
delete temp;
}
}
void display()
{
List*p=head;
while(p!=0)
{
cout<<p->item<<endl;
p=p->next;
}
}


