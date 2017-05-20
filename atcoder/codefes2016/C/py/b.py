def r(): return map(int,input().split())
k,t=r()
a=sorted([r()])
print(max(0, a[t-1]-sum(a[:t-1])-1))
