#include <iostream>
using namespace std;

class Circle {
    private:
        int m_iRadius;
    public:
    
        Circle(int iRadius){
            m_iRadius=iRadius;
        }

        float Area() {    
            return(m_iRadius*m_iRadius*3.14);
        }

        Circle ScaleUp(int iTimes) {
            Circle oTemp(m_iRadius*iTimes);
            return(oTemp);
        }
};


//Main Program

int main(){
    Circle oC1(1);
    cout << "Area = :"  << oC1.Area() << endl;
    float fArea = oC1.ScaleUp(2).Area();
    cout << "Area = :"  << fArea << endl;
}
