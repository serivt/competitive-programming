def get_chefora_number_at(index):
    if index < 10:
        return index
    return int("%d%s" % (index, str(index)[::-1][1:]))


q = int(input())
mod = 1000000007
for _ in range(q):
    ans = 1
    [l, r] = [int(i) for i in input().split()]
    for i in range(l + 1, r + 1):
        ans *= l ** get_chefora_number_at(i)
    print(ans % mod)
