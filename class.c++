#include <iostream>     //header file to import input output functionality

//cout and cin are defined in this namespace
using namespace std;

// creating a class 
class Complex
{
// access specifier private: objects canot access this values directly
private:
    int real;
    int imaginary;

// access specifier public: objects can access this
public:

    // constructor
    Complex(int a, int b) : real(a), imaginary(b){};

    // member function
    void display()
    {
        cout << real << endl
             << imaginary << endl;
    }
};

// main function execution starts from here
int main()
{   
    // creating objects C++ way
    Complex a(1, 2);

    // invoking function using object
    a.display();
}