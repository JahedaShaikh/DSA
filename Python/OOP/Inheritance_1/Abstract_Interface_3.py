'''

 in interfaces concept all method should be static method
'''

from abc import *
class CollegeAutomation(ABC):
    @abstractmethod
    def m1(self): pass

    @abstractmethod
    def m2(self): pass

    @abstractmethod
    def m3(self): pass

class sanayaProvider(CollegeAutomation):
    def m1(self):
        print('m1 method')

    def m2(self):
        print('m2 method')

    def m3(self):
        print('m3 method')

s=sanayaProvider()
s.m1()
s.m2()
s.m3()

