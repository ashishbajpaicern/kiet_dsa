# bus arrival:  2:00 2:10 3:00 3:20 3:50 5:00
# bus departure: 2:30 3:40 3:20 4:30 4:00 5:20
# find minimum number of buses required

# Solution:
bus_arrival =   [20, 21, 30, 32,  35, 50]
bus_departure = [23, 34, 32, 43,  40, 52]

count = 0
m = 0
for i in range(20,55):
    if i in bus_departure:
        count -= 1
    if i in bus_arrival:
        count += 1
    if count > m:
        m = count
    
print(m)
    
    




