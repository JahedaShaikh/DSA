import time
class Test:
    def __init__(self):
        print('Constructor excution')
    def __del__(self):
        print('destructor excution')

# t1=Test()
# t2=t1
# t3=t1
#
# del t1
# time.sleep(10)
# print('object not destroy after deleting t1')
# del t2
# time.sleep(10)
# print('object not destroy after deleting t2')
# print('removing last object')
# del t3
# print('end of appliction....')


l=[Test(), Test(),Test, Test()]
del l
time.sleep(10)
print('end of application')