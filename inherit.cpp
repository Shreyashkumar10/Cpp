#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
	int m_iEmpId;
	float m_fBasic;
	float m_fSal;
public:
	void CalculateSal() {
	    m_fSal=m_fBasic+.4*m_fBasic;
        cout << "Salary is :" << m_fSal << endl;
	 }
    ~Employee() {
        cout << "Destroying Base Class Employee" << endl;
    }
};

class Trainee : public Employee {
    private:
        float m_fTPI;
    public:
    void CalculateTPI(char cGrade){
        if(cGrade=='A') {
            m_fTPI=1200;
        }
        else {
            m_fTPI=900;
        }
        cout << "TPI is :" << m_fTPI << endl;
    }
    ~Trainee(){
        cout << "Destorying the Trainee Object First" << endl;
    }
};

int main() {
    Employee oE1;
    Trainee oT1;
    //oE1.CalculateTPI('A');
    oE1.CalculateSal();
    oT1.CalculateSal();
    oT1.CalculateTPI('D');
}
