#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers will you enter (lessthan 15): " << endl;
    cin >> n;
    
    int num[n];
    cout << "Enter the numbers: " <<endl;
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
   
    int nfind = 0;
    int count = 0;
    while (1)
    {
        /* code */
        cout << "Which number are you searching for: ";
        cin >> nfind;
        for(int j=0;j<n; j++){
            if(nfind == num[j])
            {
                count++;
            }
        }
        cout << "The number of times " << nfind << " has occured " << count << endl;
        count = 0;
    }
}