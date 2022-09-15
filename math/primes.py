def primes(n):
    prime = [True] * n
    prime[0] = prime[1] = False
    for i in range(2, n):
        if prime[i] is True:
            for j in range(i * i, n, i):
                prime[j] = False

    return [i for i, x in enumerate(prime) if x]


print(primes(100))
