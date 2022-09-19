'''                      x
                       /  \
                     y1     y2
                    /  \    / \
                y3   y4  y 5   y6
                one parent multiple child and all child at the same level
'''

class p:
    def m1(self):
        print('parent method')

class c1(p):
    def m2(self):
        print('child 1 class')

class c2(p):
    def m3(self):
        print('child 2 method')

# cc=c1()
# cc.m1()
# cc.m2()
# cc.m3()    -error


cc=c2()
cc.m1()
# cc.m2()  --error
cc.m3()


