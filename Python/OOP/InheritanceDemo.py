class Person:
    def __init__(self,name,age):
        self.name=name
        self.age=age

    def eatndrink(self):
        print('Eat Biryani and Drink beer')


class Employee(Person):
    def __init__(self,name,age,eno,esal):
        # self.name=name
        # self.age=age
        super().__init__(name,age)
        self.eno=eno
        self.esal=esal

    def work(self):
        print('Coding Python Programming')
    def empInfo(self):
        print(self.name)
        print(self.age)
        print(self.eno)
        print(self.esal)

e=Employee('Sanaya',48,872435,100000)
e.eatndrink()
e.work()
e.empInfo()