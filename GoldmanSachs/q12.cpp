/* Question :  Find total number of Squares in a N*N chessboard */
/* Question Link : https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1 */

#include <iostream>
using namespace std;

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long ans = (N * (2 * N + 1) * (N + 1)) / 6;
        return ans;
    }
};

