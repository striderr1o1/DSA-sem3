#include <iostream>
#include <vector>
using namespace std;
string encode(vector<string>& strs) {
        int numberOfStrings = strs.size();
        //for each number of string
        string encodedStr = "";
        for(int i = 0; i < numberOfStrings; i++){
            string curr = strs[i];
            string newstr = "";
            for(int j = 0; j < curr.length(); j++){
                char currCharacter = curr[j];
                currCharacter = char(int(currCharacter)+3);
                newstr.push_back(currCharacter);
            }
            encodedStr+=newstr;
            encodedStr+=" ";
        }
        return encodedStr;
}
vector<string> decode(string s) {
        int wordCount = 0;
        vector<string> v = {};
        //getting number of words
        for(int i = 0, j = 0; i < s.length(); i++){
            if(s[i]==' '){
                wordCount++;
            }
        }
        int counter2 = 0;
        int i = 0;
        string str = "";
        while(counter2 != wordCount){
            //take character, reduce by 3, append to a string
            //if space bar, put string in vector, increase counter
            char curr = s[i];
            if(curr != ' '){
            curr = char(int(curr)-3);
            str+=curr;
            i++;
            
            }
            else{
                v.push_back(str);
                str = "";
                counter2++;
                i++;
            }
            
        }
        return v;
}
int main(){
    vector<string> v = {"neet","code","love","you"};
    string enc = encode(v);
    cout << enc << endl;

    v = decode(enc);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}