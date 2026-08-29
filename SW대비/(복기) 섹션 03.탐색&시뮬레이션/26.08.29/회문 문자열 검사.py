import sys
# sys.stdin=open("input.txt","rt")

def reverse(x) :
    y=x[::-1]
    if x==y :
        return True
    else :
        return False

n=int(input())
for i in range(n) :
    s=input()
    s=s.upper()
    if reverse(s) :
        print("#%d YES" %(i+1))
    else :
        print("#%d NO" %(i+1))
