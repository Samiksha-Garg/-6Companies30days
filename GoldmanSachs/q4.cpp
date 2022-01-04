/* Question : Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string. */
/* Question Link : https://practice.geeksforgeeks.org/problems/run-length-encoding/1/ */

#include <iostream>
using namespace std;

string encode(string src)
{     
  //Your code here 
  string ans = "";
  int len = src.length();
 
  
  for (int i = 0; i < len; i++) {
      int count = 1;
      ans += src[i];
      
      while(i + 1 < len && src[i] == src[i + 1]) {
          i++;
          count++;
      }
      
      ans += to_string(count);
  }
  
  return ans;
}     
 