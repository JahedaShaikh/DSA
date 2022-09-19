from abc import abstractmethod

class Vehicle:

    @abstractmethod
    def getNoofwheels(self):
        pass

class Bus(Vehicle):
    def getNoofwheels(self):
        return 6

class Auto(Vehicle):
    def getNoofwheels(self):
        return 3

b=Bus()
print(b.getNoofwheels())
a=Auto()
print(a.getNoofwheels())