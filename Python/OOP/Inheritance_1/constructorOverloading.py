'''

constructor overloading is not possible in python
'''
class Test:

    def __init__(self):
        print('no-arg constructor')

    def __init__(self,x):
        print('one-arg constructor')

    def __init__(self,x,y):
        print('two-arg constructor')

# t=Test()   #----error  ---
# t=Test(10)   #---error
t=Test(10,20)   #consider last constructor only  ---two-arg constructor


# but we can do like this
class Test:
    def __init__(self,a=None,b=None,c=None):
        print('constructor with 0|1|2|3 arguments')

t=Test()
t=Test(10)
t=Test(10,20)
t=Test(10,20,30)


class Test:
    def __init__(self,*args):
        print('constructor with variable number of argument')

t=Test()
t=Test(10)
t=Test(10,20,30,40,50)
