# PROGRAM TO OVERLOAD MULTIPLICATION OPERATOR TO WORK ON EMPLOYEE OBJECTS


class Employee:
    def __init__(self,name,salaryPerDay):
        self.name=name
        self.salaryPerDay=salaryPerDay

    def __mul__(self, other):  # e  t
        return self.salaryPerDay*other.workingdays

class TimeSHeet:
    def __init__(self,name,workingdays):
        self.name=name
        self.workingdays=workingdays

    def __mul__(self, other):  # t e
        return self.workingdays*other.salaryPerDay


e=Employee('Sanaya',500)
t=TimeSHeet('Sofi',25)
print('This month salary=',e*t)    #500*25

print('This month salary=',t*e)    #25*500

'''
e*t  right
t*e
order is imp here
'''


