'''

       p1      p2      p3
         \     |       /
               c

    multiple parent but single child

    order is important in miltiple like
    c(p1,p2):===> p1 will be consider
    c(p2,p1):===> p2 will be consider

'''

'''class p1:
    def m1(self):
        print('parent one')

class p2:
    def m2(self):
        print('parent two')

class c(p1,p2):
    def m3(self):
        print('child method')

cc=c()
cc.m1()
cc.m2()
cc.m3()

'''

# FOR ORDER EXAMPLE
class p1:
    def m1(self):
        print('parent one')

class p2:
    def m1(self):
        print('parent two')

class c(p2,p1):
    def m2(self):
        print('child method')

cc=c()
cc.m1()    #p2 will be consider
cc.m2()


