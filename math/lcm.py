from math import gcd


def lcm(a, b):
    return int(a * b / gcd(a, b))


print(lcm(12, 16))
