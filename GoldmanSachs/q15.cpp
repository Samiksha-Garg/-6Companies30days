/* Question : Check if an array can be divided into pairs whose sum is divisible by k */

#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool isPossible(vector <int> v, int k) {
    int n = v.size();
    unordered_map <int, int> um;

    for (int i = 0; i < n; i++) {
        if(um.count(v[i] % k) == 0) {
            um[v[i] % k] = 0;
        }

        um[v[i] % k] += 1;
    }

    for (int i = 0; i < n; i++) {
        if(um[v[i] % k] != 0) {
            um[v[i] % k]--;
            int req = k - (v[i] % k);

            if(um.count(req) == 0 || um[req] == 0) {
                return false;
            }

            um[req]--;
        }
    }

    return true;
}