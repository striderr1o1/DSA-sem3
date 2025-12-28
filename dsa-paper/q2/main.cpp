#include <iostream>
#include "list.h"
using namespace std;
int main(){
    List l1;
    l1.insertData(01, "Mustafa", 20);
    l1.insertData(02, "Usman", 23);
    l1.insertData(03, "Haider", 25);
    l1.searchStudent("Usman");
    l1.searchStudent("Mustafa");
}