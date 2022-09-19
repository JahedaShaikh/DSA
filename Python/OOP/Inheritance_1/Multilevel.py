class gParent:
    def m1(self):
        print('Grand Parent method')

class Parent(gParent):
    def m2(self):
        print('Parent method')

class child(Parent):
    def m3(self):
        print('Child method')

c=child()
c.m1()
c.m2()
c.m3()

