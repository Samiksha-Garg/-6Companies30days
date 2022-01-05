/* Question : Distributing M items in a circle of size N starting from K-th position */

#include <iostream>
using namespace std;

int lastToy(int kids, int toys, int start) {
    int firstRound = kids - start + 1;

    if (firstRound >= toys) {
        return start + toys - 1;
    }

    toys -= firstRound;
    int rounds = toys / kids;
    toys -= (rounds * kids);

    return toys;
}