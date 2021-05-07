def gcd(a, b):
    while b > 0:
        a %= b
        a, b = b, a
    return a


def gcd_recurs(a, b):
    if b == 0:
        return a
    return gcd_recurs(b, a % b)


if __name__ == "__main__":
    print(gcd(120, 140))
    print(gcd_recurs(120, 140))
