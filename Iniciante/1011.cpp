#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double R, pi = 3.14159;

    cin >> R;

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << (4.0/3)*pi*R*R*R << endl;

    return 0;
}