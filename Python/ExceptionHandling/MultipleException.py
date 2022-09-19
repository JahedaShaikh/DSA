try:
    x=int(input('enter first num: '))
    y=int(input('enter second num: '))
    print('the result: ',x/y)

except ZeroDivisionError:
    print('cannot divide with zero')

except ValueError:
    print('please provide int value only')