def eea(a, b):
    x, y, x1, y1 = 1, 0, 0, 1
    while b != 0:
        q = a // b
        x, x1 = x1, x - q * x1
        y, y1 = y1, y - q * y1
        a, b = b, a - q * b
    return x, y, a


def eea_recurs(a, b):
    if b == 0:
        return 1, 0, a
    x1, y1, g = eea_recurs(b, a % b)
    return y1, x1 - (a // b) * y1, g


if __name__ == "__main__":
    a, b = 1914, 899
    b = 899
    print(eea(1914, 899))  # answer should be 8, -17, 29
    print(eea_recurs(1914, 899))
