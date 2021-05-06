def bin_pow(a, n):
    result = 1
    while (n > 0):
        if n & 1:
            result *= a
        a *= a
        n >>= 1
    return result


def bin_pow_recurs(a, n):
    if n == 0:
        return 1
    temp = bin_pow_recurs(a, n // 2)
    result = temp * temp
    if n & 1:
        return result * a
    return result


def pow(a, b):
    result = 1
    for _ in range(b):
        result *= a
    return result


if __name__ == "__main__":
    print(bin_pow(3, 22))
    print(bin_pow_recurs(3, 22))
