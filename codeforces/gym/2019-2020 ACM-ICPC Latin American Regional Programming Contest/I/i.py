DIVIDER = 10 ** 9 + 7

n, l = [int(i) for i in input().split()]
m = [[int(j) for j in input().split()][1:] for _ in range(l)]

sended = []


def send_emails(mailing_list, index):
    for i in mailing_list:
        if i <= l:
            if i != index:
                send_emails(m[i - 1], i)
        else:
            sended.append(i)


send_emails(m[0], 1)

a, b = len(set(sended)), len(sended)

print(b % DIVIDER, a % DIVIDER)
