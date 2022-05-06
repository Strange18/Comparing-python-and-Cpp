#include <iostream>

using namespace std;

// base class
// this called will be inherited
class Base
{
private:
    int a;
    int b;

public:
    Base(int a, int b)
    {
        cout << "base class called\n";
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a << endl
             << b << endl;
    }
};

// class derived this inherits base class Base
// using public access specifier
class Derived : public Base
{
public:
    // constructor for derived class
    // it will be used to pass value to the constructor of base class
    Derived(int x, int y) : Base(x, y)
    {
        cout << "drived class called\n";
    }
};

int main()
{
    // instance of Derived class in created
    // when this is created constrctor of base class is called first then
    // only derived class constructor
    Derived object(1, 2);

    // accessing fucntion of base class
    object.display();
}