class Parent:
    def property(self):
        print('land+gold+cash+power')
    def marry(self):
        print('Appalamma')

class child(Parent):
    def marry(self):
        super().marry()
        print('Katrina Kaif')

c=child()
c.property()
c.marry()