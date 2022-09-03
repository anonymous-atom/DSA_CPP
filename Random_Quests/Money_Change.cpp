//
// Created by karun on 4/9/22.
//
#include <iostream>

int get_change(int m) {
    int total;
    total = m/10;
    m %= 10;

    total += m/5;
    m %= 5;

    total += m/1;
    return total;
}

int main() {
    int m;
    std::cin >> m;
    std::cout << get_change(m) << '\n';
}