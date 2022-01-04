/* Question: Program to find Nth Ugly Number. */
/* Question Link: https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/ */

#include <iostream>
#include <set>
using namespace std;
#define ull unsigned long long

class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    set <ull> st;
	    st.insert(1);
	    
	    while(--n) {
	        auto it = st.begin();
	        ull first = *it;
	        st.erase(it);
	        
	        st.insert(first * 2);
	        st.insert(first * 3);
	        st.insert(first * 5);
	    }
	    
	    return *(st.begin());
	}
};