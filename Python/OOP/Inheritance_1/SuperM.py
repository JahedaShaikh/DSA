class p:
    def m1(self):
        print('parent method')
class c(p):
    def m2(self):
        self.m1()
        print('child method')

cc=c()
cc.m2()

'''class P:
    a=10
    def __init__(self):
        print('parent constructor')
    def m1(self):
        print('parent instance method')

    @classmethod
    def m2(cls):
        print('parent classmethod')
    @staticmethod
    def m3():
        print('parent staticmethod')

class C(P):
    def __init__(self):
        print('child constructor')
    def method1(self):
        # print(super().a)
        print(self.a)
        # super().m1()
        self.m1()
        # super().m2()
        self.m2()
        # super().m3()
        self.m3()
        super().__init__()

        
        # if same name is not available in the drive class we can use self also
        

c=C()
c.method1()'''

'''class A:
    def m1(self):
        print('A class method')
class B(A):
    def m1(self):
        print('B class method')
class C(B):
    def m1(self):
        print('C class method')
class D(C):
    def m1(self):
        # super().m1()
        super(B, self).m1()
        # B.m1(self)
        # A.m1(self)
        
        print('d class method')

d=D()
d.m1()

'''