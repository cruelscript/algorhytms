class StringHashing:
    LLONG_MAX = 2 ** 64 - 1

    def __init__(self, str, mod=LLONG_MAX):
        self.prime = 331
        self.mod = mod
        self.str = str

        self.hashes, self.primes = self.build_hash(self.str, self.prime, self.mod)

    @staticmethod
    def build_hash(str, prime, mod):
        hashes = [0] * (len(str) + 1)
        primes = [0] * (len(str) + 1)
        hashes[0], primes[0] = 0, 1

        for i in range(len(str)):
            hashes[i + 1] = hashes[i] * prime + ord(str[i])
            hashes[i + 1] %= mod
            primes[i + 1] = primes[i] * prime
            primes[i + 1] %= mod

        return hashes, primes

    def get(self, i=-1, j=-1):
        if i == -1 or j == -1:
            i, j = 0, len(self.str) - 1

        hash = self.hashes[j + 1]
        hash -= (self.hashes[i] * self.primes[j - i + 1]) % self.mod
        if hash < 0:
            hash += self.mod
        return hash

    def __len__(self):
        return len(self.str)


def substring_count(str):
    substr_count = 1  # the whole string
    for i in range(len(str)):
        sub_hashes = []
        for j in range(len(str)):
            if j + i > len(str):
                break
            sub_hashes.append(StringHashing(str[j:j + i]).get())
        substr_count += len(set(sub_hashes))
    return substr_count


s = 'asdadqwezxcasdfqcsdfsf'
s1 = 'asdadqwezxcasdfqcsdfsf'

if StringHashing(s).get() == StringHashing(s1).get():
    print('Strings are equal')

if StringHashing('daddf235r').get() == StringHashing('sadijufhb237').get():
    print('Strings are equal')

if StringHashing(s).get(2, 4) == StringHashing('dad').get():
    print('Slices are equal')

print(substring_count('yellow'))
