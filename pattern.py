pattern, text = input(), input()
P = len(pattern)
needed, current = sum(ord(c) for c in pattern), sum(ord(c) for c in text[:P])

for i in range(len(text) - P + 1):
    if needed == current and pattern == text[i:i + P]:
        print(i, sep=' ')
    current += ord(text[(i + P) % len(text)]) - ord(text[i])
