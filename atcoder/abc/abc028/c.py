from itertools import permutations
l = [int(i) for i in input().split()]
a = [set([sum(i) for i in list(permutations(l,3))])]
print(len(a))
