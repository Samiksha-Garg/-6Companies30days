/* Question : Given an array of strings, return all groups of strings that are anagrams. */
/*Question like : https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/ */

#include <vector>
#include <iostream>
using namespace std;

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector <vector <string>> ans;
        unordered_map <string, int> um;
        
        int n = string_list.size();
        
        for (int i = 0; i < n; i++) {
            string s = string_list[i];
            sort(s.begin(), s.end());
            
            if (um.count(s)) {
                int idx = um[s];
                ans[idx].push_back(string_list[i]);
            } else {
                int idx = ans.size();
                um[s] = idx;
                vector <string> temp;
                temp.push_back(string_list[i]);
                ans.push_back(temp);
            }
        }
        
        return ans;
        
    }
};