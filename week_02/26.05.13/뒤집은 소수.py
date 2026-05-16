import sys
# sys.stdin = open("input.txt", "rt")

def reverse(x) :
    y=str(x)
    y=y[::-1]

    return int(y)

def isPrime(x) :
    if x==1 : # 1이 넘어오면 바로 False 리턴
        return False

    for i in range(2,x//2+1) :
        # 2부터 절반까지만 돌면 됨
        # ex) 16 -> 2*8(16//2/)

        if x%i==0 :
            return False
    else :
        # for~else 구문 : for문에서 return 되지 않으면 for문 끝나고 else 구문 작동
        return True


N=int(input())
a=list(map(int,input().split()))

for i in a :
    a=reverse(i)
    if isPrime(a) :
        print(a,end=" ")

