
class Complex:

    # this function acts as a constrcutor in python 
    def __init__(self):

        print("Constrcutor Invoked\n")

    # this function acts as a destrcutor in python 
    def __del__(self):

        print("Destructor Invoked\n")

# constructor is called at the time of object creation
a = Complex()

# destructor is invoked when object exits from the scope