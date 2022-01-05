/* Question : Find max 10 numbers in a list having 10M entries. */

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector <int> maxTen(vector <int> nums) {

    priority_queue <int> pq (nums.begin(), nums.end());
    vector <int> ans;

    for (int i = 0; i < 10; i++) {
        ans.push_back(pq.top());
        pq.pop();
    }
    
    return ans;
}

int main () {

    return 0;
}