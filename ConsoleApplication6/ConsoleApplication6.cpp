#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    void Input(int num, int denom) {
        numerator = num;
        if (denom == 0) {
            cout << "The denominator cannot be equal to 0. Set it to 1" << endl;
            denominator = 1;
        }
        else {
            denominator = denom;
        }
    }

    void Input() {
        int min = 10;
        int max = 99;
        numerator = min + rand() % (max - min + 1);
        denominator = min + rand() % (max - min + 1);
    }

    void Print() {
        cout << "Drob: " << numerator << "/" << denominator << endl;
    }

    void SetNumerator(int num) {
        numerator = num;
    }

    void SetDenominator(int denom) {
        if (denom == 0) {
            cout << "The denominator cannot be equal to 0. Set it to 1" << endl;
            denominator = 1;
        }
        else {
            denominator = denom;
        }
    }

    int GetNumerator() {
        return numerator;
    }

    int GetDenominator() {
        return denominator;
    }
};

int main() {
    srand(time(0));

    Fraction f1, f2;

    f1.Input(3, 4);
    f1.Print();
    f2.Input();
    f2.Print();

    f1.SetNumerator(5);
    f1.SetDenominator(7);
    cout << "After: " << f1.GetNumerator() << "/" << f1.GetDenominator() << endl;
}