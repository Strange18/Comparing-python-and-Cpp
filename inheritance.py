# inheritance in python


# base class that will be inherited
class Base:

    # constructor
    def __init__(self, a, b):
        print("Base class called\n")
        self.a = a
        self.b = b

    # member function
    def display(self):
        print(f'{self.a} {self.b}')
        

# Derived class 
# inheritance can be applied by writting base class in the brackets
class Derived(Base):
    # constrcutor of derived class
    def __init__(self, x, y):
        # passing the values to base class's constructor
        super().__init__(x, y)
        print("Derived class called\n")



# creating object of derived class
x = Derived(1, 2)

# calling function of base class
x.display()
