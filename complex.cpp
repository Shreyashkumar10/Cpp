#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex() : real(0), imaginary(0) {}

    Complex(double r, double i) : real(r), imaginary(i) {}

    // Member function to add an integer to a Complex number
    Complex ADD(int a) {
        return Complex(real + a, imaginary);
    }

    // Member function to add two Complex numbers
    Complex ADD(const Complex& s) {
        return Complex(real + s.real, imaginary + s.imaginary);
    }

    void display() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    float r1,r2,im1,im2;

    std::cout << "Enter the first complex number, real followed by imaginary number: " ;
    std::cin >> r1 >> im1;
    std::cout << "Enter the first complex number, real followed by imaginary number: " ;
    std::cin >> r2 >> im2;
    
    // Create Complex objects
    Complex c1(r1, im1);  // replace with variables
    Complex c2(r2, im2);

    // Add an integer to a Complex number
    Complex result1 = c1.ADD(2);
    std::cout << "Result of ADD(int, Complex): ";
    result1.display(); 

    // Add two Complex numbers
    Complex result2 = c1.ADD(c2);
    std::cout << "Result of ADD(Complex, Complex): ";
    result2.display();

    return 0;
}
