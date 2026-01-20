#include <iostream>
#include <string>
using namespace std;

class Employee {
    protected:
	int m_iEmpId;
	float m_fHRA;
	float m_fSal;
public:
	virtual void CalculateSal() {
	    m_fSal= m_fHRA+120;
        cout << "From Employee Class: Salary is :" << m_fSal << endl;
	 }
    ~Employee() {
        cout << "Destroying Base Class Employee" << endl;
    }
};

class Trainee : public Employee {
    private:
        float m_fTPI;
    public:
    void CalculateSal() {
	    m_fSal=m_fHRA+m_fTPI;
        cout << "From Trainee Class: Salary is :" << m_fSal << endl;
	 }
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
    Employee *pE1;
    pE1 = new Employee();
    pE1->CalculateSal();

    Employee *pE2;
    pE2 = new Trainee();
    //((Trainee*)pE2)->CalculateSal();
    pE2->CalculateSal();
}
