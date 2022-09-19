# W.A.P TO FIND NO. OF OCCURRENCES IN GIVEN STRING

word=input('Enter some string to get the no. of occurrences: ')

d={}
for ch in word:
    d[ch]=d.get(ch,0)+1
print(d)