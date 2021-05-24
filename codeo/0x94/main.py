# Divide and conquer O(n log n)
def get_max_sum_subarray(arr):
    length = len(arr)
    if length == 1:
        return arr[0]
    half = length // 2
    left = get_max_sum_subarray(arr[:half])
    right = get_max_sum_subarray(arr[half:])
    best = max(left, right)
    best_left, sum_left = arr[half - 1], arr[half - 1]
    best_right, sum_right = arr[half], arr[half]
    for i in range(half - 2, -1, -1):
        sum_left += arr[i]
        best_left = max(best_left, sum_left)
    for i in range(half + 1, length):
        sum_right += arr[i]
        best_right = max(best_right, sum_right)
    return max(best, best_left + best_right)

n = int(input())
a = [int(i) for i in input().split()]
print(get_max_sum_subarray(a))