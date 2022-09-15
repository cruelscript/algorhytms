n = int(input())
nums = []
for i in range(n):
    nums.append(int(input()))

result = nums[0]
for i in range(1, len(nums)):
    result ^= nums[i]

print(result)
