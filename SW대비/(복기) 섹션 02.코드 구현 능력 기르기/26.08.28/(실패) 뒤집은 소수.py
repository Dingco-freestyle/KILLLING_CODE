import sys
# sys.stdin=open("input.txt","rt")

# 원인1. 숫자 뒤집을 때 문자열(str)로 변환해서 슬라이싱 사용(반환때 다시 int형)
# 원인2. 소수 확인할 때 반절만 보면 됨. 반절 이상 보면 낭비
def reverse(x) :
    tmp=str(x)
    tmp=tmp[::-1]
    return int(tmp)

def isPrime(x) :
    if x==1 :
        return False

    for i in range(2,x//2+1) :
        if x%i==0 :
            return False
    else :
        return True

if __name__ == "__main__" :
    n=int(input())
    arr=list(map(int,input().split()))
    for i in arr :
        a=reverse(i)
        if isPrime(a) :
            print(a,end=" ")