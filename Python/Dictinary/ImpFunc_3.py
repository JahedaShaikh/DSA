# 1) len()
d={100:'A',200:'B',300:'C',400:'D'}
print(len(d))

# 2) get(key)
print(d.get(100))
print(d.get(700))
print(d.get(700,'sanaya'))

d1={100:'A',200:'B'}
d2={300:'C',400:'D'}
d1.update(d2)
print(d1)  #{100: 'A', 200: 'B', 300: 'C', 400: 'D'}

k=d1.keys()
print(k)  #dict_keys([100, 200, 300, 400])

for k in d1.keys():
    print(k)

v=d1.values()
print(v)        #dict_values(['A', 'B', 'C', 'D'])
for v in d1.values():
    print(v)


i=d1.items()
print(i)     #dict_items([(100, 'A'), (200, 'B'), (300, 'C'), (400, 'D')])
for i in d1.items():
    print(i)    # (100, 'A')
                # (200, 'B')
                # (300, 'C')
                # (400, 'D')

for k,v in d1.items():
    print(k,'......',v)


# POP()
print(d1.pop(100)) #A
print(d1.pop(700,'GUEST'))
#
print(d1.popitem()) #(400, 'D')
#
d1.clear()
print(d1)

d={100:'A',200:'B',300:'C'}
d.setdefault(400,'sanaya')
print(d)

