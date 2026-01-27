#include <iostream>
using namespace std;

int main(void) {
    extern int first, last; // using extern tells it is declare else where

    cout << first << " and " << last << endl;
    return 0;
}

int first=10, last = 20;  // global variables declared outside the scope