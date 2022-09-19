d={x:x*x for x in range(1,6)}
print(d)

d={x:2**x for x in range(1,6)}
print(d)

# MARGING COLLECTION
d1={100:'A',200:'B'}
d2={300:'C',400:'D'}

d3={**d1, **d2}
print(d3)

# NESTED COLLECTION
d={
    'cars':('HONDA','INNOVA','MARUTI'),
    'mobiles':('SUMSUNG','LENNOVO','IPHONE')
}
print(d)
print(d['cars'][1])
print(d.get('cars')[1])
print(d.get('mobiles'))

for x in d['mobiles']:
    print(x)
