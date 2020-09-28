#include <iostream>
#include <iomanip>

using namespace std;
/*
int main() {
    int n;
    cin >> n;
    while (n--) {
        string organic;
        cin >> organic;
        double molar_mass = 0;
        double mole = 0;
        for (int i = 0; i < organic.length(); i++) {
            char c = organic[i];
            if (c == 'C') {
                molar_mass += 12.01;
                mole = 12.01;
            } else if (c == 'O') {
                molar_mass += 16.0;
                mole = 16.0;
            } else if (c == 'N') {
                molar_mass += 14.01;
                mole = 14.01;
            } else if (c == 'H') {
                molar_mass += 1.008;
                mole = 1.008;
            } else {
                int num = 0;
                while (i < organic.length() && isdigit(organic[i])) {
                    num = num * 10 + organic[i] - 48;
                    i++;
                }
                molar_mass += (num - 1) * mole;
                i--;
            }
        }
        cout << fixed << setprecision(3);
        cout << molar_mass << endl;
    }
    return 0;
}*/