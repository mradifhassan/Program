#include <iostream>
#include <cmath>

using namespace std;

#define PI 3.141592654

double radian(double degree) {
    return degree * PI / 180;
}

int main() {
    cout << "Enter operation: " << endl;
    cout << "1. sin\n2. cos\n3. tan\n4. cot\n5. sec\n6. cosec" << endl;

    int n;
    cin >> n;

    cout << "Enter angle (Degree): " << endl;
    double D;
    cin >> D;

    if (n == 1) {
        double sine = sin(radian(D));
        cout << "sin(" << D << ") = " << sine << endl;
    } else if (n == 2) {
        double cosine = cos(radian(D));
        cout << "cos(" << D << ") = " << cosine << endl;
    } else if (n == 3) {
        double tangent = tan(radian(D));
        cout << "tan(" << D << ") = " << tangent << endl;
    } else if (n == 4) {
        double cotangent = 1 / tan(radian(D));
        cout << "cot(" << D << ") = " << cotangent << endl;
    } else if (n == 5) {
        double secant = 1 / cos(radian(D));
        cout << "sec(" << D << ") = " << secant << endl;
    } else if (n == 6) {
        double cosecant = 1 / sin(radian(D));
        cout << "cosec(" << D << ") = " << cosecant << endl;
    } else {
        cout << "Invalid operation number." << endl;
    }

    return 0;
}
