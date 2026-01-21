#include <iostream>

class A {
public:
    void displayA() {
        std::cout << "Class A\n";
    }
};

class B : virtual public A { // virtual keyword used for virtual inheritance
public:
    void displayB() {
        std::cout << "Class B\n";
    }
};

class C : virtual public A { // virtual keyword used for virtual inheritance
public:
    void displayC() {
        std::cout << "Class C\n";
    }
};

class D : public B, public C {
public:
    void displayD() {
        std::cout << "Class D\n";
    }
};

int main() {
    D dObj;
    dObj.displayA(); // Accessing A's member function
    dObj.displayB(); // Accessing B's member function
    dObj.displayC(); // Accessing C's member function
    dObj.displayD(); // Accessing D's member function
    return 0;
}
