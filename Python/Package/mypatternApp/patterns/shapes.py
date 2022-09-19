def square():
    print('you choosed to print SQUARE patter...')
    n=int(input('Enter no of programs: '))
    for i in range(n):
        print('* '*n)

def right_angle_triange():
    print('You choosed to print RIGHT ANGLED TRIANGLE pattern...')
    n=int(input('Enter no of rows: '))
    for i in range(n):
        for j in range(i+1):
            print('*',end=" ")
        print()

def pyramis():
    print('You choosed to print PYRAMId patter ...')
    n=int(input('Enter no of rows: '))
    for i in range(n):
        print((' '*(n-i-1))+('* ')*(i+1))

def diamond():
    print('you choosed to print DIAMOND pattern...')
    n=int(input('Enter n value: '))
    for i in range(n):
        print(' '*(n-i-1)+'* '*(i+1))
    for i in range(n-1):
        print(' '*(i+1)+'* '*(n-i-1))