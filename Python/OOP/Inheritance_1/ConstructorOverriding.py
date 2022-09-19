'''class Parent:
    def __init__(self):
        print('parent constructor')
class child(Parent):
    def __init__(self):
        super().__init__()
        print('child constructor')

c=child()

'''

 # -----SMALL APPLICATION-----

class Person:
    def __init__(self,name,age,hieght,weight):
        self.name=name
        self.age=age
        self.height=hieght
        self.weight=weight


class Employee(Person):
    def __init__(self,name,age,hieght,weight,eno,esal):
        super().__init__(name,age,hieght,weight)
        self.eno=eno
        self.esal=esal

    def display(self):
        print('Name: ',self.name)
        print('Age: ',self.age)
        print('Height: ',self.height)
        print('Weight: ',self.weight)
        print('Epmloyee Number : ',self.eno)
        print('Employee Salary: ',self.esal)

e=Employee('Sanaya',23,5.5,40,23451,30000)
e.display()