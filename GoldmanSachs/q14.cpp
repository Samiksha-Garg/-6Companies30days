/* Question : Minimum Size Subarray Sum */
/* Question Link : https://leetcode.com/problems/minimum-size-subarray-sum/ */

#include <iostream>
#include <queue>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        
        int i = 0;
        
        queue <int> q;
        
        while(sum < target && i < n) {
            sum += nums[i];
            q.push(nums[i]);
            i++;
        }
        
        if (sum < target) {
            return 0;
        }
        
         while(!q.empty() && sum - q.front() >= target) {
            sum -= q.front();
            q.pop();
        }
        
        int ans = q.size();
        
        while (i < n) {
            q.push(nums[i]);
            sum += nums[i];
            while(!q.empty() && sum - q.front() >= target) {
                sum -= q.front();
                q.pop();
            }
            
            int s = q.size();
            ans = min(ans, s);
            i++;
        }
        
        return ans;
        
    }
};