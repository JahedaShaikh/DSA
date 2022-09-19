# print('hello')
# print(10/0)
# print('hi')


print('hello')

try:
    # we have to take risky code
    print(10/0)
except ZeroDivisionError:
    # Handling code
    print(10/2)
print('Hi')