d={}
print(type(d))

d=dict()
print(type(d))

d={100:'sanaya', 200:'anaya'}
print(d)

l=[(10,'A'),(30,'B')]
d=dict(l)
print(d)

# ACCESSING

d={100:'A',200:'B',300:'C',400:'D'}
print(d[100])
# print(d[700])

# ADD/UPDATE
d[500]='E'
print(d)

d[200]='AB'
print(d)

del d[200]
print(d)

# del d[600]
# print(d)

D1={100:'A',200:'B'}
D2={200:'B',100:'A'}
print(D1==D2)
print(100 in D1)
print(300 in D1)
# print('A' in D1) We cant do this