import math

n = int(input())
f = false
for i in range(1, n):
    if n % i != 0:
        print("%d 不是質數", %(n))
if f:
    print("%d 是質數", %(n))
