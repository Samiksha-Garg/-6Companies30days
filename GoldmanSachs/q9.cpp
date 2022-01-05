/* Question : Given a pattern containing only I's and D's. I for increasing and D for decreasing.
Devise an algorithm to print the minimum number following that pattern.  */
/* Question Link : https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1# */

#include <iostream>
using namespace std;

class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        string ans = "";
        int len = S.length();
        int low = 1;
        
        int d = 0;
        
        
        for (int i = 0; i < len; i++) {
            if (S[i] == 'D') {
                d++;
            } else {
                int D = d;
                while (d != 0) {
                    ans += to_string(low + d);
                    d--;
                }
                
                ans += to_string(low);
                low = low + D + 1;
            }
        }
        
        while (d != 0) {
            ans += to_string(low + d);
            d--;
        }
        
        ans += to_string(low);
        
        return ans;
    }
};