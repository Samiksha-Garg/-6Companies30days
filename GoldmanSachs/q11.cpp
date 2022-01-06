/* Question : Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers. */
/* Question Link : https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/# */

#include <iostream>
using namespace std;

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        long long sum = 0;
        long long sqrSum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += (long long)arr[i];
            sqrSum += (long long)arr[i] * (long long)arr[i];
        }
        
        long long reqSum = ((long long)n * ((long long)n + 1)) / 2;
        long long reqSqr = ((long long) n * ((long long)n + 1) * (2 * (long long)n + 1) ) / 6;
        long long diff = reqSum - sum;
        long long add =  (reqSqr - sqrSum) / diff;
        
        int *ans = new int[2];
        int missing =  (add + diff) / 2;
        int repeat = missing - diff;
        
        ans[1] = missing;
        ans[0] = repeat;
        
        return ans;
    }
};