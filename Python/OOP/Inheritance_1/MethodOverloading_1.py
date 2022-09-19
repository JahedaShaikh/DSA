class Test:
    def m1(self):
        print('no-arg-method')

    def m1(self,x):
        print('one-arg-method')

    def m1(self, x,y):
        print('two -arg-method')

t=Test()
# t.m1()  #----error
# t.m1(10) #------error
t.m1(10,20)   # two-arg-method



'''
 Method overloading is not Supported

  BUT we can overload using x.__class__.__name__
'''

class Test:
    def m1(self,x):
        print('{}-argument method'.format(x.__class__.__name__))

t=Test()
t.m1(10)
t.m1(10.5)
t.m1('sanaya')
'''
output  

int-argument method
float-argument method
str-argument method
'''