# W.A.P TO TAKE DICTIONARY FROM THE KEYBOARD AND PRINT THE SUM OF VALUES

d=eval(input('Enter Dictionary: '))
sum=0
for item in d.items():
    print(item)
    sum+=item[1]
print(sum)

# print(sum(d.values()))