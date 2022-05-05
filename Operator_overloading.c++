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

    // function declaration
    void display();
    // friend function: function that can access all the private public member of class
    // operator overloading in C++
    friend Complex operator+(Complex A, Complex B);
};

// defining function outside class
void Complex :: display()
{
    cout << real << endl
         << imag << endl;
}

// friend function is not a member function
// function definition
//  operator overloading for adding two objects of class Complex
//  similarly all other operators can be overloaded but new operator cannot be created
// these operators cannot be overloaded :
// scope resolution operator (::)
// sizeof operator
// ternary operator (? :)
// pointer member access operator (.*)

Complex operator+(Complex A, Complex B)
{
    Complex temp(0, 0);
    temp.real = A.real + B.real;
    temp.imag = A.imag + B.imag;
    return temp;
}

int main()
{
    // creating objects
    Complex A(1, 2), B(1, 2), C(0, 0);

    // addition using operator overloading
    C = A + B;
    
    C.display();
}