# start {1,0,3,2,7}
# finish {5,2,5,5,9}
# minimum activities can one person perform?

start = [1,0,3,2,7]
finish = [5,2,5,5,9]

stack = []
for i in range(len(start)):
    stack.append(finish[i] - start[i])
stack.sort()
min = stack[0]
count = 0
for i in stack:
    if i == min:
        count += 1
print(count)