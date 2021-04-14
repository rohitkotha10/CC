#include "bits/stdc++.h"
using namespace std;
 
class Complex
{
public:
    double real;
    double imaginary;
 
};
 
Complex add(const Complex& a,const Complex& b)
{
    Complex c;
    c.real=a.real+b.real;
    c.imaginary=a.imaginary+b.imaginary;
    return c;
}
 
Complex subtract(const Complex& a,const Complex& b)
{
    Complex c;
    c.real=a.real-b.real;
    c.imaginary=a.imaginary-b.imaginary;
    return c;
}
 
Complex multiply(const Complex& a,const Complex& b)
{
    Complex c;
    c.real=a.real*b.real - a.imaginary*b.imaginary;
    c.imaginary=a.imaginary*b.real + a.real*b.imaginary;
    return c;
}
 
Complex divide(const Complex& a,const Complex& b)
{
    Complex c;
    double denominator=b.real*b.real + b.imaginary*b.imaginary;

    c.real=a.real*b.real + a.imaginary*b.imaginary;
    c.real=c.real/denominator;


    c.imaginary=a.imaginary*b.real - a.real*b.imaginary;
    c.imaginary=c.imaginary/denominator;

    return c;
}