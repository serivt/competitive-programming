from collections import Counter
t = int(input())
for i in range(1, t + 1):
    s = input()
    if len(set(s)) == 1:
        print("Case #%d: 0" % i)
        continue
    vowels = []
    consonants = []
    for j in s:
        if j in ["A", "E", "I", "O", "U"]:
            vowels.append(j)
        else:
            consonants.append(j)
    ans = (len(s) - Counter(s).most_common(1)[0][1]) * 2
    if len(vowels) <= len(consonants):
        x = len(set(vowels)) - 1
        ans = min((len(s) - len(vowels)) + (max(x, 0) * 2), ans)
    else:
        x = len(set(consonants)) - 1
        ans = min((len(s) - len(consonants)) + (max(x, 0) * 2), ans)
    print(len(vowels), len(consonants))
    print(Counter(s))
    print("Case #%d: %d" % (i, ans))
