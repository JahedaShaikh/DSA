class Test:
    def m1(self, a=None, b=None, c=None):
        if a is not None and b is not None and c is not  None:
            print('three-argument method')
        elif a is not None and b is not None:
            print('two-argument method')
        elif a is not None:
            print('one-argument method')
        else:
            print('no-argument method')

t=Test()
t.m1()          #no-argument method
t.m1(10)        #one-argument method
t.m1(10,20)     #two-argument method
t.m1(10,20,30)  #three-argument method

# that's why we are not require method overloading , same method can fullfil our requirement

