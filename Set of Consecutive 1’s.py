n = int(input())
a = input().split()
count = 0
max = 0
for i in range(n):
    if a[i] == '1':
        count += 1
    else:
        if count > max:
            max = count
        count = 0
if count > max:
    print(count)
else:
    print(max)
