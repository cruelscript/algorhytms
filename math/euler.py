def euler_phi(n):
    ans = n
    prime = 2
    while n >= prime * prime:
        if n % prime == 0:
            ans = ans / prime * (prime - 1)
            while n % prime == 0:
                n /= prime
        prime += 1
    if n != 1:
        ans = ans / n * (n - 1)
    return int(ans)


print(euler_phi(9))
