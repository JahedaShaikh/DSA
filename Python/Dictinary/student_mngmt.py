# STUDENT MANAGEMENT USIND DICTIONARY

n=int(input('ENTER NUMBER OF STUDENT: '))
d={}
for i in range(n):
    name=input('ENTER STUDENT NAME: ')
    marks=int(input('ENTER STUDENT MARKS: '))
    d[name]=marks

print('INSERTION COMPLETED...')
print('*'*20)
print('NAME','\t\t','MARKS')
print('*'*20)
for k,v in d.items():
    print(k,'\t\t',v)


print('SEARCH OPERATION STARTED....')
while True:
    name=input('ENTER STUDENT NAME TO GET THE MARKS: ')
    print('MARKS OF {} are'.format(name),d[name])
    option=input('DO YOU WANT TO FIND ANOTHER STUDENT MARKS [YES|NO]: ')
    if option.lower()=='no':
        break


print('THANKS FOR USING OUR APPLICATION...')