class Car:
    def __init__(self,name,model,color):
        self.name=name
        self.model=model
        self.color=color

    def getInfo(self):
        print('\tCar Name: {}\n\tModel: {}\n\tColor: {}'.format(self.name,self.model,self.color))

class Person:
    def __init__(self,name,age):
        self.name=name
        self.age=age

    def eatndrink(self):
        print('Eating Biryani and Drinking Beer')

class Employee(Person):
    def __init__(self,name,age,eno,esal,car):
        super().__init__(name,age)
        self.eno=eno
        self.esal=esal
        self.car=car

    def work(self):
        print('Coding Python Program...')
    def empinfo(self):
        print('Employee Name: ',self.name)
        print('Employee age: ',self.age)
        print('Employee eno: ',self.eno)
        print('Employee Salary: ',self.esal)
        print('Employee Salary: ',self.esal)
        print('Employee Car Information')
        self.car.getInfo()      #Employee using Car functionality

car=Car('Innova','2.5v','Grey')
e=Employee('Sanaya',23,23452,10000,car)
e.eatndrink()   #Employee using person class functionality
e.work()
e.empinfo()
