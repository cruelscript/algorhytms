# bitwise operations

i = int(input())

# i-th power of 2
print(1 << i)

# change i-th bit of number n to 1
n = int(input())
print(n | (1 << i))

# change i-th bit of number n to 0
print(n & ~(1 << i))

# toggle i-th bit of number n
print(n ^ (1 << i))

# check if i-th bit is 1
print(n & (1 << i) != 0)
