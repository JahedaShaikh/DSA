class P:
    def m1(self):
        print('Parent method')
class C(P):
    def m2(self):
        print('child method')

c=C()
c.m2()
c.m1()