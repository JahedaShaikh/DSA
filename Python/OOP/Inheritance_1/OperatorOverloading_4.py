'''
b+b
b+b+b
like

'''

class Book:
    def __init__(self,pages):
        self.pages=pages
    # def __add__(self, other):
    #     return self.pages+other.pages


     # I want to take b1+b2+b3+b4...

    def __add__(self, other):
        return Book(self.pages+other.pages)
    def __str__(self):
        return 'the total number of pages:{}'.format(self.pages)

    # Iwant to take like  b1+b2*b3+b4
    def __mul__(self, other):
        return Book(self.pages*other.pages)




b1=Book(100)
b2=Book(200)
b3=Book(500)
# print(b1+b2)  #---error because we need magic method

print(b1+b2)

print(b1+b2+b3)

print(b1+b2*b3)   #operator precedence here first * then +

