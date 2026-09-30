#include <iostream>
#include <queue>
#include <vector>
using namespace std;
const int LIMIT = 20000;
int total_steps_needed(int start, int end);
int main()
{
    signed int number1;
    cin >> number1;
    signed int number2;
    cin >> number2;
    signed int count = total_steps_needed(number1, number2);
    cout << count;
}
// codeforces 520B two buttons
int total_steps_needed(signed int start, signed int end){

    vector<signed int> layer(LIMIT + 1, 0);
    vector<bool> array(LIMIT + 1, false);
    std::queue<signed int> Q;
    Q.push(start);
    layer[start] = 0;
    while(!Q.empty()){
        signed int front_value = Q.front();
        Q.pop();
        array[front_value] = true;
        if(front_value == end){
            break;
        }
        signed int multiplied_value = front_value*2;
        signed int subtracted_value = front_value - 1;
        
            if(multiplied_value <= LIMIT && array[multiplied_value] == false){
                layer[multiplied_value] = layer[front_value] + 1;
                array[multiplied_value] = true; 
                Q.push(multiplied_value);
            }
            if(subtracted_value >= 1 && array[subtracted_value] == false){
                layer[subtracted_value] = layer[front_value] + 1;
                array[subtracted_value] = true; 
                Q.push(subtracted_value);
            }
                

    }

    return layer[end];

}




