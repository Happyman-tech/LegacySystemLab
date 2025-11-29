#include <iostream>
#include "Header1.h" Iteration1: Add modular structure;
using namespace std;

void checkValidInput() { Iteration 3: Add checkValidInput() and exception handling in main()

    if (cin.fail()) {
        throw "Incorrect input";
    }
}

int main() {
    double a, b, h;
    int n;
    try {
        cout << "Input a,b,h:";
        cin >> a >> b >> h;
        checkValidInput();

        cout << "Input n>=1,n=";
        cin >> n;
        checkValidInput();

        checkValidParams(n, h);

        for (double x = a; x <= b; x += h) { Iteration2 Move calculation logic to calculate() and parameter checks to checkValidParams()
            double y = calculate(n, x);
            cout << "x=" << x << " y=" << y << endl;
        }
    }
    catch (const char* ex) {
        cout << ex << endl;
        return -1;
    }
    catch (...) {
        cout << "Error" << endl;
        return -2;
    }
    return 0;
}
