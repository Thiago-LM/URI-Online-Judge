#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a > b) {
        if (c > b) {
            std::cout << b << std::endl;
            if (a > c) {
                std::cout << c << std::endl;
                std::cout << a << std::endl;
            } else {
                std::cout << a << std::endl;
                std::cout << c << std::endl;
            }
        } else if (b > c) {
            std::cout << c << std::endl;
            std::cout << b << std::endl;
            std::cout << a << std::endl;
        }
    } else if (b > a) {
        if (c > a) {
            std::cout << a << std::endl;
            if (b > c) {
                std::cout << c << std::endl;
                std::cout << b << std::endl;
            } else {
                std::cout << b << std::endl;
                std::cout << c << std::endl;
            }
        } else if (a > c) {
            std::cout << c << std::endl;
            std::cout << a << std::endl;
            std::cout << b << std::endl;
        }
    }

    std::cout << std::endl;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}
