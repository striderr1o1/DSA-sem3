#include <iostream>
#include "stack.h"
using namespace std;
int main(){
    stack st(5);
    int ch;
while(1)
{
cout <<"\n1.push 2.pop 3.display 4.exit\n Enter your choice";
cin >> ch;
switch (ch)
{
case 1: cout <<"enter the element";
cin >> ch;
st.push(ch);
break;
case 2: st.pop(); break;
case 3: st.display();break;
case 4: exit(0);
}
}
return (0);
}
