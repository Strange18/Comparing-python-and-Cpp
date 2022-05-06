# inheritance in python

class Base:
    def __inti__(self, a, b):
        print("Base class called\n")
        self.a = a
        self.b = b

    def display(self):
        print(f'{self.a} {self.b}')


class Derived(Base):
    def __inti__(self, x, y):
        super().__init__(x, y)
        print("Derived class called\n")


x = Derived(1, 2)
x.display()
