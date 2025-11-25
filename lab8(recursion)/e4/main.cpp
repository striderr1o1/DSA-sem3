// #include <iostream>
// using namespace std;
// int ComputeBinomialCoefficients(int n, int m);

// int main(){
// cout << ComputeBinomialCoefficients(4,2);
// }

// int ComputeBinomialCoefficients(int n, int m){
//     if(m == 0){
//         return 1;
//     }
//     if(n == m){
//         return 1;
//     }
//     return ComputeBinomialCoefficients(n-1, m) + ComputeBinomialCoefficients(n-1, m-1);
// }
#include<iostream>
using namespace std;
int mystery(int,int);
int main()
{
int x=3,y=2;
cout<<"Result = "<<mystery(x,y);
return 0;
}
int mystery(int a, int b)
{
if(b==1)
return a;
else
return a + mystery(a, b-1);
}