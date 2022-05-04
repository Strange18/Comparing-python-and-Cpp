#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    // constructor has the same name as class but has no return type
    Complex(int a, int b)
    {
        cout << "constructor invoked\n";
        real = a;
        imag = b;
    };
    void display()
    {
        cout << real << endl
             << imag << endl;
    }

    friend Complex operator+(Complex A, Complex B);
};
Complex operator+(Complex A, Complex B)
{
    Complex temp(0, 0);
    temp.real = A.real + B.real;
    temp.imag = A.imag + B.imag;
    return temp;
}

int main()
{
    Complex A(1, 2), B(1, 2), C(0, 0);
    C = A + B;
    C.display();
}