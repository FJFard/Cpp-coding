/*
Implement the function findRoots to find the roots of the quadratic equation: ax2 + bx + c = 0.

The roots of the quadratic equation can be found with the following formula: https://images.app.goo.gl/b82MWUrqDJfVxajL8

For example, the roots of the equation 2x2 + 10x + 8 = 0 are -1 and -4.

Criteria to pass all testcases:
  * Simple case 
  * Equal roots
  * Distinct roots

/**/

#include <tuple>
#include <stdexcept>
#include <iostream>
#include <string>
#include <cmath>

std::pair<double, double> findRoots(double a, double b, double c)
{
    //throw std::logic_error("Waiting to be implemented");
    pair<double, double> x;
    double delta = sqrt(b*b - 4*a*c);
    x.first = (-b + delta)/(2*a);
    x.second = (-b - delta)/(2*a);
    
    return(x);
}

#ifndef RunTests
int main()
{
    std::pair<double,double> roots = findRoots(2, 10, 8);
    std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}
#endif
