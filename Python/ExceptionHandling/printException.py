try:
    print(10/0)
except ZeroDivisionError as msg:
    print('exception type: ',type(msg))
    print('the type of ecxeption: ',msg.__class__)
    print('name of exception: ',msg.__class__.__name__)
    print('description of exception: ',msg)
    print()


try:
    x=int(input('enter first num: '))
    y=int(input('enter first num2: '))
    print('the result: ',x/y)

except BaseException as be:
    print('the type of exception: ',type(be))
    print('the type of exception: ',be.__class__)
    print('the excpetion class name: ',be.__class__.__name__)
    print('description of exception: ',be)

