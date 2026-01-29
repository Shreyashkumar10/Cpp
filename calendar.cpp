#include<iostream >

class year{
public :
    int yr;

    year(int y){
        yr = y;
    }

    bool isLeap(){
        if((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0)){
            return true;
        }
        return false;
    }

}

class month {
    public :


    int mn;    month(int m){
        mn = m;
    }

}

class day{
    public:

    int dy;    day(int d){
        dy = d;
    }
}

class date{
    public :

    year y;
    month m;    
    day d;
    date(int yr, int mn, int dy) : y(yr), m(mn), d(dy) {}   

}

int main(){

    date today(2024, 1, 15);
    std::cout << "Year: " << today.y.yr << std::endl;
    std::cout << "Month: " << today.m.mn << std::endl;
    std::cout << "Day: " << today.d.dy << std::endl;
    std::cout << "Is leap year: " << (today.y.isLeap() ? "Yes" : "No") << std::endl;

    return 0;
}