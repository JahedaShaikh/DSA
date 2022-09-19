# W.A.P TO FIND NO. OF VOWEL IN THE GIVEN STRING

word=input('Enter some string: ')
vowel={'a','e','i','o','u'}
d={}
for ch in word:
    if ch in vowel:
        d[ch]=d.get(ch,0)+1

print(d)
