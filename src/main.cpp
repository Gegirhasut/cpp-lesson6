#include "matrix.h"
#include <iostream>

int main() {
    math::Matrix m1(3,3);
    m1(0,0) = 1.;
    m1(1,1) = 2.;
    m1.print();

    math::Matrix m2(3,3);
    m2(0,0) = 5.;
    m2(1,1) = 10.;
    m2.print();

    math::Matrix m3 = m1 + m2;
    m3.print();

    std::cout << "+= operator" << std::endl;
    m3 += m1;
    m3.print();

    m3 += m1;
    m3.print();

    std::cout << "-= operator" << std::endl;
    m3 -= m1;
    m3.print();

    std::cout << "* operator" << std::endl;
    math::Matrix mm1(1,2);
    mm1(0, 0) = 2;
    mm1(0, 1) = 3;
    mm1.print();

    math::Matrix mm2(2,1);
    mm2(0, 0) = 3;
    mm2(1, 0) = 4;
    mm2.print();

    math::Matrix mm3 = mm1 * mm2;
    mm3.print();

    math::Matrix mm4 = mm2 * mm1;
    mm4.print();

    std::cout << "*=2 operator" << std::endl;
    mm4 *= 2;
    mm4.print();

    std::cin >> mm4;
    std::cout << "New matrix mm4" << std::endl << mm4;

    return 0;
}