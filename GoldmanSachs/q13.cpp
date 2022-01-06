/* Question : Decode the String */
/* Question Link : https://practice.geeksforgeeks.org/problems/decode-the-string2444/1# */

#include <iostream>
#include <stack>
using namespace std;

class Solution{
public:
    string decodedString(string s){
        // code here
        int len = s.length();
        stack <string> stk;
        
        for (int i = 0; i < len; i++) {
            if (s[i] == ']') {
                string str = "";
                
                while(!stk.empty() && stk.top() != "[") {
                    str = stk.top() + str;
                    stk.pop();
                }
                
                stk.pop();
                
                int num = 0;
                int pV = 1;
                
                while(!stk.empty() && stk.top() <= "9" && stk.top() >= "0") {
                    int val = stoi(stk.top());
                    num += val * pV;
                    pV *= 10;
                    stk.pop();
                }
                
                
                string final = "";
                
                for (int j = 0; j < num; j++) {
                    final += str;
                }
                
                stk.push(final);
            } else {
                string top = "";
                top += s[i];
                stk.push(top);
            }
        }
        
        return stk.top();
    }
};