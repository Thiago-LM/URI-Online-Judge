#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b;
    float c;

    cin >> a >> b;

    c = (a*b)/12.0;

    cout << fixed << setprecision(3);
    cout << c << endl;

    return 0;
}