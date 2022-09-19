class University:
    def __init__(self):
        self.dept=self.Department()

    class Department:
        pass

u=University()
# d=Department()---Error  outside person cant create inside class object

'''
# Aggregation
class professor:
    pass
class Department:
    def __init__(self,prof):
        self.prof=prof

p=professor()
d=Department(p)
d1=Department(p)   # Department has Professor so it is a strong relationship

'''