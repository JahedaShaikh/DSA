#            Public

class Test:
    def __init__(self):
        self.x=10
    def m1(self):
        print('m1 method')
    def m2(self):
        print(self.x)
        self.m1()

t=Test()
t.m2()
print(t.x)
t.m1()




'''
Private

__x=10
'''
class Test:
    def __init__(self):
        self.__x=10
    def __m1(self):
        print('private method')

    def m2(self):
        print(self.__x)
        self.__m1()

t=Test()
t.m2()
# t.__x    #  error
#  t.__m1()   #error we cannot access



# Secrete
print(t._Test__x)
t._Test__m1()


'''
  Protected
'''

class Test:
    def __init__(self):
        self._x=10

    def m1(self):
        print(self._x)
class subtest(Test):
    def m2(self):
        print(self._x)

s=subtest()
s.m1()
s.m2()