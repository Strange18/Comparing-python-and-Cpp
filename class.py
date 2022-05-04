# no header file required
# no main function required
# all input output are in default library

# creating class
class Complex:

    # init function (magic function): it is invoked when 
    # object is created
    # self parameter refers to the object that is created
    # no need to specify which type of data is being fed
    # it will understand on the basis of manipulation

    def __init__(self,a,b):
        self.a = a                      #for public member
        self.b = b
        # self.__c = c                  for private (__) before variable
        # self._d = d                   for protected (_) before variable

    # creating a member function
    # self is the instance or object which invokes it 
    def display(self):
        # formatted output way of python
        print(f'{self.a} \n{self.b}')

# creating object python's way
a = Complex(1,2)

# invoking member function
a.display()
