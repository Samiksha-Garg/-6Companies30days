/* Question :  Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2. */
/* Question Link :  https://leetcode.com/problems/greatest-common-divisor-of-strings/ */

#include <iostream>
using namespace std;

class Solution {
public:
    
    bool isPrefix(string s, string prefix, int n1, int n2) {
        if (n2 > n1) {
            return false;
        }
        
        if (n1 % n2 != 0) {
            return false;
        }
        
        for (int i = 0; i < n1; i += n2) {
            if (s.substr(i, n2) != prefix) {
                return false;
            }
        }
        
        return true;
    }
    
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.length();
        int n2 = str2.length();
        
        string ans = "";
        
        for (int i = 1; i <= n2; i++) {
            string prefix = str2.substr(0, i);
            if (isPrefix(str1, prefix, n1, i) && isPrefix(str2, prefix, n2, i)) {
                ans = prefix;
            }
        }
        
        return ans;
    }
};