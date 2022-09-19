# HOW TO OVERLOAD LESS THAN AND GREATER THAN

class Student:
    def __init__(self,name,marks):
        self.name=name
        self.marks=marks

    def __gt__(self, other):
        return self.marks>other.marks

    def __le__(self, other):
        return self.marks<=other.marks



s1=Student('Sanaya',100)
s2=Student('Sofi',200)
print(s1>s2)   #False
print(s1<s2)   #True we do not require to implement lt method we use either

print(s1<=s2)
print(s1>=s2)