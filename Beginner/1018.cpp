#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, f, g, h;

    cin >> a;
    cout << a << endl;
    b = a/100;
    cout << b << " nota(s) de R$ 100,00" << endl;
    c = (a-(b*100))/50;
    cout << c << " nota(s) de R$ 50,00" << endl;
    d = (a-(b*100)-(c*50))/20;
    cout << d << " nota(s) de R$ 20,00" << endl;
    e = (a-(b*100)-(c*50)-(d*20))/10;
    cout << e << " nota(s) de R$ 10,00" << endl;
    f = (a-(b*100)-(c*50)-(d*20)-(e*10))/5;
    cout << f << " nota(s) de R$ 5,00" << endl;
    g = (a-(b*100)-(c*50)-(d*20)-(e*10)-(f*5))/2;
    cout << g << " nota(s) de R$ 2,00" << endl;
    h = (a-(b*100)-(c*50)-(d*20)-(e*10)-(f*5)-(g*2))/1;
    cout << h << " nota(s) de R$ 1,00" << endl;

    return 0;
}