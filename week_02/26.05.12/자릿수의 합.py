import sys
from itertools import count
#
# sys.stdin = open("input.txt", "rt")

def digit_sum(x) :
    sum=0

    for i in str(x) :
        sum += int(i)

    return sum

n=int(input())
a=list(map(int,input().split()))
res=0
max=-2147000000

for i in a :
    sum=0
    b=i

    sum=digit_sum(b)

    if max<sum :
        max=sum
        res=i

print(res)

#8 13 16