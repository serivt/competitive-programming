def find_max_substring(arr, k):
    if k == 26:
        return len(arr)
    i, j = 0, 0
    chars = {}
    answer = 0
    length = len(arr) 
    while i < length:
        while j < length:
            chars[arr[j]] = chars.get(arr[j], 0) + 1
            if len(chars) > k:
                chars[arr[j]] -= 1
                break
            j += 1
        if len(chars) >= k:
            answer = max(answer, j - i)
        chars[arr[i]] -= 1
        if chars[arr[i]] == 0:
            del chars[arr[i]]
        i += 1
    return answer

s = input()
k = int(input())
max_substring = find_max_substring(s, k)
print(max_substring)