class Engine:
    def __init__(self):
        self.power='124kw'
    def m1(self):
        print('Engine specific functionality')
class car:
    def __init__(self):
        self.engine=Engine()
    def m2(self):
        print('car requre engine functionality')
        self.engine.m1()
        print(self.engine.power)

c=car()
c.m2()