#include <iostream>
#include <vector>
using namespace std;
//encoding
//APPROACH:
//- Get the number of strings in the received vector

//- create a new empty encoded string that we intend to return
//- loop over each string, and perform another loop over each 

//- create a new string for inner loop

//- in the inner loop, increment each string's character by 3 and push
//  this incremented character to the new string.

//- whenever the inner loop ends, push this new string to the encoded string,
//  and also append a space bar to the encoded string.

//- return this encoded string when loop ends after covering all the strings
//  in the vector
string encode(vector<string>& strs) {
    //number of strings
        int numberOfStrings = strs.size();
    //encoded string where we will push encoded characters
        string encodedStr = "";
        //looping over vector
        for(int i = 0; i < numberOfStrings; i++){
            string curr = strs[i];// our current string of this vector
            string newstr = "";//create a new string that we will use
            for(int j = 0; j < curr.length(); j++){// our inner loop
                char currCharacter = curr[j];// our current character of this string
                currCharacter = char(int(currCharacter)+3);// increment the character by 3(ascii)
                newstr.push_back(currCharacter);//push this encoded character to string
            }
            //add the string to encoded string
            encodedStr+=newstr;
            encodedStr+=" ";// add a space bar which makes decoding easier
        }
        return encodedStr;
}
//DECODING
//- count the words in the received encoded string by counting the spacebars.
//- create a counter and a while loop that keeps running till our counter doesnt
//   become equal to the word count.
//- the while loop runs over each character in the string
//-  if the string is not a space bar, it reduces the char by 3, appends it to a string,
//   and increments the i counter.
//- if the string is a space bar, it pushes the string to a vector, increases the counter
//   that is being compared with word cound, resets the string and increments i. 
//- In the end, it returns the vector.
vector<string> decode(string s) {
        int wordCount = 0;
        vector<string> v = {};
        //getting number of words
        for(int i = 0, j = 0; i < s.length(); i++){
            if(s[i]==' '){
                wordCount++;
            }
        }
        //counter that is compared to the word count in while loop
        int counter2 = 0;
        int i = 0;// i counter
        string str = "";//string that is used in while loop
        while(counter2 != wordCount){
            //take character
            char curr = s[i];
            //if character is not spacebar, reduce by 3, append to a string, increase i
            if(curr != ' '){
                curr = char(int(curr)-3);
                str+=curr;
                i++;
                
            }
            //if space bar, put string in vector, increase counter
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