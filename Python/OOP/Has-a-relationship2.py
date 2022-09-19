class Car:
    def __init__(self,name,model,color):
        self.name=name
        self.model=model
        self.color=color
    def getInfo(self):
        print('car name:{}, model: {}, color: {}'.format(self.name,self.model,self.color))

class employee:
    def __init__(self,ename,eno,car):
        self.ename=ename
        self.eno=eno
        self.car=car

    def empInfo(self):
         print('enployee name:',self.ename)
         print('enployee no:',self.eno)
         print('enployee car')
         self.car.getInfo()

car=Car('sanaya','2.5v','drey')
emp=employee('sanaya',87245,car)
emp.empInfo()
