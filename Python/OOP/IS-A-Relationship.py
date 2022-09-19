'''class p:
    def m1(self):
        print('parent class method')
class c(p):
    def m2(self):
        print('child class method')

c1=c()
c1.m1()
c1.m2()'''

class P:
    a=10
    def __init__(self):
        print('Parent Constructor...')
        self.b=20
    def m1(self):
        print('Parent instance method..')

    @classmethod
    def m2(cls):
        print('Parent class Mthod')

    @staticmethod
    def m3():
        print('Parent static method..')

class C(P):
    pass


c=C()
print(c.a)
print(c.b)
c.m1()
c.m2()
c.m3()
