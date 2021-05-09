import math


def last_three_digits(a, b):
    a = a % 1000
    res = 1
    while b > 0:
        if b & 1:
            res = res * a % 1000
        a = a * a % 10000
        b = b >> 1
    return res


a = 123456
b = 2

x = b * math.log10(a)
first_three_digits = math.floor((10 ** (x - math.floor(x))) * 100)

print(f"{first_three_digits}...{last_three_digits(a, b)}")
