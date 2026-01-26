#include <iostream>

class DB;  // Forward declaration of class DB

class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m, int cm) : meters(m), centimeters(cm) {}

    // Friend function to add DM and DB distances
    friend DM addDistances(const DM& dm, const DB& db);

    void display() {
        std::cout << "Distance in meters and centimeters: " << meters << "m " << centimeters << "cm" << std::endl;
    }
};

class DB {
private:
    int feet;
    int inches;

public:
    DB(int ft, int in) : feet(ft), inches(in) {}

    // Friend function to add DM and DB distances
    friend DM addDistances(const DM& dm, const DB& db);

    void display() {
        std::cout << "Distance in feet and inches: " << feet << "ft " << inches << "in" << std::endl;
    }
};

// Friend function to add DM and DB distances
DM addDistances(const DM& dm, const DB& db) {
    int totalMeters = dm.meters + db.feet * 0.3048;
    int totalCentimeters = dm.centimeters + db.inches * 2.54;

    // Adjust for overflow
    if (totalCentimeters >= 100) {
        totalMeters += totalCentimeters / 100;
        totalCentimeters %= 100;
    }

    return DM(totalMeters, totalCentimeters);
}

int main() {
    DM dm(2, 50);  // 2 meters and 50 centimeters
    DB db(6, 10);  // 6 feet and 10 inches

    DM result = addDistances(dm, db);

    std::cout << "Result: ";
    result.display();

    return 0;
}
