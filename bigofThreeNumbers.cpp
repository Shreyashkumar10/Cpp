#include <iostream>
using namespace std;

int main(){
    int one, two, three, max;
    /*
    cout << "Enter the first number: " << endl;
    cin >> one;
    cout << "Enter the first number: " << endl;
    cin >> two;
    cout << "Enter the first number: " << endl;
    cin >> three;
    */
    cout << "Enter three numbers: " << endl;
    cin >> one >> two >> three;

    max = one;

    if(max < two)
        max = two;
    if (max < three)
        max = three;
    
    cout << "Biggest number is :" << max << endl;
}