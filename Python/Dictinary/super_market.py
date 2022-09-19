supermarket={
    'store1':{
        'name':'SANAYA GENERAL STORE',
        'items':[
            {'name':'soap','quantiy':20},
            {'name':'brush','quantity':30},
            {'name':'pen','quantity':40}
        ]
    },
    'store2':{
        'name':'SANAYA BOOK STORE',
        'items':[
            {'name':'python','quantity':100},
            {'name':'django','quantity':200},
            {'name':'java','quantity':300}
        ]
    }
}
print(supermarket)

#TO PRINT NAME OF STORE 1
print(supermarket['store1']['name'])
print(supermarket.get('store1').get('name'))

# TO PRINT NAME OF ALL ITEMS PRESENT IN STORE 1
print(supermarket['store1']['items'])
for d in supermarket['store1']['items']:
    print(d)



# TO PRINT QUANTITY OF DJANGO
for d in supermarket['store2']['items']:
    if d['name']=='django':
        print(d['quantity'])