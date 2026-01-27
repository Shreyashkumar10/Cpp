#include <iostream>
using namespace std;

void factorial(int n){
    int res=1;
    int start = 1;

    while(start <= n) {
        res *= start;
        start += 1;
        cout << res << "\t";
    }
}

int main() {
    int num;
    cout << "Enter the factorial number : " << endl;
    cin >> num;
    factorial(num);
    return 0;
}