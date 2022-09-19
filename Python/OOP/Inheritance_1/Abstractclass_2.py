'''from abc import *
class Test(ABC):
    @abstractmethod
    def m1(self):
        pass
    @abstractmethod
    def m2(self):
        pass

class SubTest(Test):
    pass
s=SubTest()    #error if we are not implement staticmethod into the child class we will get error we should implement



from abc import *
class Test(ABC):
    @abstractmethod
    def m1(self):
        pass
    @abstractmethod
    def m2(self):
        pass

class SubTest(Test):
    def m1(self):
        print('m1 method implementation')

s=SubTest()
s.m1()

error becouse we are not provide m2 implementation
we should implement all static methods




from abc import *
class Test(ABC):
    @abstractmethod
    def m1(self):
        pass
    @abstractmethod
    def m2(self):
        pass

class SubTest(Test):
    def m1(self):
        print('m1 method implementation')
    def m2(self):
        print('m2 implementation')

s=SubTest()
s.m1()
s.m2()


            # output

           # m1 method implementation
           # m2 implementation

'''

from abc import *
class Test(ABC):
    def m1(self):
        print('Non-abstarct method')
    @abstractmethod
    def m2(self):
        pass

class SubTest(Test):

    def m2(self):
        print('m2 implementation')

s=SubTest()
s.m1()
s.m2()


                # output
              # Non-abstarct method
              #   m2 implementation

