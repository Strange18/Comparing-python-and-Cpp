#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int *imag = new int;

public:
    // constructor has the same name as class but has no return type
    Complex(int a, int b)
    {
        cout << "constructor invoked\n";
        real = a;
        *imag = b;
    };
    void display()
    {
        cout << real << endl
             << *imag << endl;
    }
    // Destructor has the same name as class but has no return type and has ~ at first
    // Destructor is called automatically when object exits from the scope
    // and a Destrcutor is usally used in case of DMA
    // or is automatically invoked

    ~Complex()
    {
        cout << "destructor invoked\n";
        delete imag;
    }
};

int main()
{
    Complex a(1, 2);

    a.display();
}
