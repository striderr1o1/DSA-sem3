#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums){
    vector<int> r;
    for(int i = 0; i < nums.size(); i++){
        int product = 1;
        for(int j = 0; j < nums.size(); j++){

            if(i != j){
                product = product * nums[j];
            }
        }
        r.push_back(product);
    }
    return r;
}
int main(){
    vector<int> v1 = {1,2,4,6};
vector<int> v = productExceptSelf(v1);
for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
}
}
