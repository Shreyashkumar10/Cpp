#include <iostream>
#include <exception>
using namespace std;

int main() {
    int num;
    int denom;
    int result=0;

    try{
        cout << "Enter the numerator and denominator for divsion " << endl;
        cin >> num >> denom;

        if (denom == 0){
            throw(denom);
        }
        else {
            result=num/denom;
        }
    }
    catch(int den)
    {
        cout << "Denominator is zero " << endl;
    }
    
        cout << "Result is " << result << endl;
    
    return 0;
}