def arrange(s):
    m = len(s)
    for i in xrange(m):
        cnt = 0
        for j in xrange(m):
            if s[j] == s[i]:
                cnt += 1
            else:
                break

    return 

def solve(n, s):
    for i in xrange(n):
        s = arrange(s)

    print s

while 1:
    n = int(raw_input())
    if n == 0: break

    s = raw_input()
    solve(n, s)
