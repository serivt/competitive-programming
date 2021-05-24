import math

def find_min_substring(arr, k):
    if k == 1:
        return 1
    i, j = 0, 0
    chars = {}
    answer = math.inf
    length = len(arr) 
    while i < length:
        while len(chars) < k and j < length:
            chars[arr[j]] = chars.get(arr[j], 0) + 1
            j += 1
        if len(chars) >= k:
            answer = min(answer, j - i)
        chars[arr[i]] -= 1
        if chars[arr[i]] == 0:
            del chars[arr[i]]
        i += 1
    return answer

s = input()
k = int(input())
min_substring = find_min_substring(s, k)
print(-1 if min_substring == math.inf else min_substring)