/*Question: Count the subarrays having product less than k */
/* Question Link : https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/ */

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        deque <long long> dq;
        int ans = 0;
        long long prod = 1;
        
        for (int i = 0; i < n; i++) {
            while(!dq.empty() && prod * (long long)(a[i]) >= k) {
                long long tp = dq.front();
                dq.pop_front();
                prod /= tp;
            }
            
            if (prod * (long long)(a[i]) < k) {
                dq.push_back((long long)a[i]);
                prod *= a[i];
            }
            
            ans += dq.size();
        }
        
        return ans;
    }
};