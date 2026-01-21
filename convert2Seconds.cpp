//Convert time from HH:MM:SS format to seconds using class in C++. 
#include <iostream>
using namespace std;

class Convert2Seconds {
    public:
        int calcSeconds, hrs, mins, secs;

        Convert2Seconds(int h,int m,int s){
            hrs = h;
            mins = m;
            secs = s;
            calcSeconds = 0;
        }

        int calculate() {
            calcSeconds = calcSeconds + (hrs * 60 * 60) + mins * 60 + secs;
            return calcSeconds;
        }
};

int main(){
    int hrs, min, sec, res;
    char colon1, colon2;
    cout << "Enter the time in HH:MM:SS format: ";
    cin >> hrs >> colon1 >> min >> colon2 >> sec;
    Convert2Seconds timevalue(hrs, min, sec);
    res = timevalue.calculate();
    cout << "The total seconds in given time is : " << res << endl;
}