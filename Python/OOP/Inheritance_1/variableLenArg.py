class Test:
    def m1(self,*args):
        print('variable length argument method')

    def sum(self,*args):
        total=0
        for x in args:
            total=total+x
        print('the sum=',total)


t=Test()
t.m1()
t.m1(10)
t.m1(10,20)
t.m1(10,20,30)
t.m1(10,20,30,40)


t.sum(10,20,30,40,50)