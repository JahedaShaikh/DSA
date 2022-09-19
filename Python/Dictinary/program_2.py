# W.A.P TO ENTER STUDENT NAME AND MARKS INTO A DICT AND DISPLAY IT

n=int(input('Enter number of Student: '))

d={}
for x in range(n):
    name=input('Enter Student name: ')
    marks=int(input('Enter marks: '))
    d[name]=marks

print('*'*30)
print('name','\t\t','marks')
print('*'*30)

for name in d:
    print(name,'\t\t',d[name])