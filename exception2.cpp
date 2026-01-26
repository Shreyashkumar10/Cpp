#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    try{
        if (age > 18){
            cout << "You are eligible to vote" << endl;
        }
        else {
            throw (age);
        }       
    }
    catch(int age){
        cout << "Your Age " << age << " is not eligible to vote " << endl;
    }
    return 0;
}