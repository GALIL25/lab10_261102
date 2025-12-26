#include <iostream>
using namespace std;

int main() {
    char grade;
    int A = 0, B = 0, C = 0, D = 0, F = 0;
    int student = 1;

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

    while (true) {
        cout << "Student [" << student << "]: ";
        cin >> grade;

        if (grade == '0') {
            break;
        }
        else if (grade == 'A') {
            A++; student++;
        }
        else if (grade == 'B') {
            B++; student++;
        }
        else if (grade == 'C') {
            C++; student++;
        }
        else if (grade == 'D') {
            D++; student++;
        }
        else if (grade == 'F') {
            F++; student++;
        }
        else {
            cout << "Wrong input. Please input again." << endl;
        }
    }

    int total = A + B + C + D + F;

    cout << "In total " << total << " students." << endl;
    cout << "A = " << A
         << ", B = " << B
         << ", C = " << C
         << ", D = " << D
         << ", F = " << F << endl;

    return 0;
}
