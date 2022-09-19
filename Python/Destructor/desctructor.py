import time
class Test:
    def __init__(self):
        print('object initialization')
    def __del__(self):
        print('fulfilling wish and perform cleanup activities')

# t=Test()
# t2=Test()
# print('End of Application')

t1=Test()
t2=Test()
t1=None
t2=None
print('End of Application')