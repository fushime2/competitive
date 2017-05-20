def qsort(A, l, r):
    if l < r:
        p = partition(A, l, r)
        qsort(A, l, p-1)
        qsort(A, p+1, r)

n = int(input())

