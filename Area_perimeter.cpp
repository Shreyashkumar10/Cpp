#include<iostream>
using namespace std;

class Area_peri{
   public:
   int l=0;
   int b=0;
pair<int, int> cal(int l, int b) { return {l * b, 2 * (l + b)}; }
};

int main(){
    Area_peri a;
    pair<int, int> result = a.cal(7, 3);
    cout << "Area: " << result.first << ", Perimeter: " << result.second << endl;
}