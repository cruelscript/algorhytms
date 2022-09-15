def subsets(nums):
    result = []
    mask = 0
    while mask < (1 << len(nums)):
        subset = []
        for i in range(len(nums)):
            if mask & (1 << i):
                subset.append(nums[i])
        result.append(subset)
        mask += 1
    return result


def k_subsets(nums, k):
    result = []
    mask = 0
    while mask < (1 << len(nums)):
        num = 0
        subset = []
        for i in range(len(nums)):
            if mask & (1 << i):
                num += 1
        if num == k:
            for i in range(len(nums)):
                if mask & (1 << i):
                    subset.append(nums[i])
            result.append(subset)
        mask += 1
    return result


print(subsets([1, 2, 5]))
print(k_subsets([1, 2, 3, 4, 5], 2))
