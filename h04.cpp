/**
    @file h04.cpp
    @author Sheng Lo
    @version Fall 2016 CS 150 MW AM
*/
#include <string>
// Add additional headers as needed here

using namespace std;
string STUDENT = "ilo";    // Add your name Blackboard/occ-email ID

#include "h04.h"

// Place the implementation (definition) of your function here

double focalLength(double d, double r1, double r2, double n)
{
    double x1 = (n - 1);
    double x2 = 1 / r1;
    double x3 = 1 / r2;
    double x4 = x1 * d;
    double x5 = n * r1 * r2;
    
    double power = x1 * ( x2 - x3 + (x4 / x5));
    
    double fLen = 1.0 / power;
    
    return fLen;
}
