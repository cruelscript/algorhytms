def bin_exp(a, n):
    result = 1
    while n != 0:
        if n & 1:
            result *= a
        n >>= 1
        a *= a
    return result


print(bin_exp(7, 3))
