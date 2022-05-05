class Complex:

    def __init__(self, a, b):
        self.__a = a  # private data members
        self.__b = b

    # operator overloading
    # magic functions
    def __add__(self, o):
        object = Complex(0, 0)
        object.a = self.a + o.a
        object.b = self.b + o.b
        return object

    def display(self):
        # formatted output way of python
        print(f'{self.a} \n{self.b}')


a = Complex(1, 2)
b = Complex(1, 2)
c = Complex(0, 0)
c = a + b
c.display()


# list of available magic function
'''
Operator	Magic Method

+	__add__(self, other)
-	__sub__(self, other)
*	__mul__(self, other)
/	__truediv__(self, other)
//	__floordiv__(self, other)
%	__mod__(self, other)
**	__pow__(self, other)
>>	__rshift__(self, other)
<<	__lshift__(self, other)
&	__and__(self, other)
|	__or__(self, other)
^	__xor__(self, other)

Comparison Operators :

Operator	Magic Method
<	__lt__(self, other)
>	__gt__(self, other)
<=	__le__(self, other)
>=	__ge__(self, other)
==	__eq__(self, other)
!=	__ne__(self, other)

Assignment Operators :

Operator	Magic Method

-=	__isub__(self, other)
+=	__iadd__(self, other)
*=	__imul__(self, other)
/=	__idiv__(self, other)
//=	__ifloordiv__(self, other)
%=	__imod__(self, other)
**=	__ipow__(self, other)
>>=	__irshift__(self, other)
<<=	__ilshift__(self, other)
&=	__iand__(self, other)
|=	__ior__(self, other)
^=	__ixor__(self, other)

Unary Operators :

Operator	Magic Method

-	__neg__(self)
+	__pos__(self)
~	__invert__(self)


'''
