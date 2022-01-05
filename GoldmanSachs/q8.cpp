/* Question :  You have to determine the total number of ways that message can be decoded, as the answer can be large return the answer modulo 109 + 7. */
/* Question Link : https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/# */

#include <iostream>
using namespace std;

class Solution {
	public:
	
	    long long MOD = 1000000007;
	
	   long long helper(string str, unordered_map <string, long long> &um) {
	       if (str == "") {
		        return 1;
		    }
		    
		    if (str[0] == '0') {
		        return 0;
		    }
		    
		    if (str.length() == 1) {
		        return 1;
		    }
		    
		   if (um.count(str) == 1){
		       return um[str];
		   }
		    
		    string num1 = str.substr(0, 1);
		    string num2 = str.substr(0, 2);
		    
		    long long twoDig = 0;
		    long long oneDig = 0;
		    
		    if (num1 >= "1" && num1 <= "9") {
		        oneDig = helper(str.substr(1), um);
		        
		    }
		    
		    if (num2 >= "10" && num2 <= "26") {
		        twoDig = helper(str.substr(2), um);
		    }
		    
		    return um[str] = (oneDig + twoDig) % MOD;
	   }

		int CountWays(string str){
		    // Code here
		    unordered_map <string, long long> um;
		    return helper(str, um);
		}

};