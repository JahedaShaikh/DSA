'''

 combination of single,multiple,multi level and hierarchical

'''

'''
class A:
    pass
class B(A):
    pass
class C(A):
    pass
class D(B,C):
    pass

print(B.mro())
print(C.mro())
print(D.mro())

output--------
[<class '__main__.B'>, <class '__main__.A'>, <class 'object'>]
[<class '__main__.C'>, <class '__main__.A'>, <class 'object'>]
[<class '__main__.D'>, <class '__main__.B'>, <class '__main__.C'>, <class '__main__.A'>, <class 'object'>]
'''

class A:
    def m1(self):
        print('A class Mthod')
class B(A):
    def m1(self):
        print('B class Mthod')
class C(A):
    def m1(self):
        print('C class Mthod')
class D(B,C):
    pass
    # def m1(self):
        # print('D class Mthod')


d=D()
d.m1()




