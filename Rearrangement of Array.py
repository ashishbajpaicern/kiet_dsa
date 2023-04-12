n = int(input())
a = input().split()
tmp = a[0]
b = []
for i in range(1, n):
    b.append(int(a[i]))
b.append(int(tmp))
for i in range(n):
    print(b[i], end=' ')
