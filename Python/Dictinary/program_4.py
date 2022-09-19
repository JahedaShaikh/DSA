# W.A.P TO GET VALUE FROM DICT FOR THE GIVEN KEY

d={100:'A',200:'B',300:'A',400:'D'}
# key=int(input('enter key to get value: '))
# if key in d:
#     print('Key value ',d.get(key))
#     # print('Key value ',d[key])
# else:
#     print('Sorry not present')



# for given value
val=input('enter value to get key: ')
available=False
for k,v in d.items():
    if v==val:
        print('correspondi val of key is ',k)
        available=True
if available==False:
    print('not found')