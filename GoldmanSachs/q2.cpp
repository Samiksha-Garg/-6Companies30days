/* Question : Given two rectangles, find if the given two rectangles overlap or not.*/
/* Question Link :  https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/ */

#include <iostream>
using namespace std;

class Solution {
  public:
  
    bool lieLeft(int L1[], int R1[], int L2[], int R2[]) {
        if (R1[0] < L2[0]) {
            return true;
        }
        
        if (R2[0] < L1[0]) {
            return true;
        }
        
        return false;
    }
    
    bool lieAbove(int L1[], int R1[], int L2[], int R2[]) {
        if (R1[1] > L2[1]) {
            return true;
        }
        
        if (R2[1] > L1[1]) {
            return true;
        }
        
        return false;
    }
    
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        if (lieLeft(L1, R1, L2, R2)) {
            return 0;
        }
        
        if (lieAbove(L1, R1, L2, R2)) {
            return 0;
        }
        
        return 1;
    }
};