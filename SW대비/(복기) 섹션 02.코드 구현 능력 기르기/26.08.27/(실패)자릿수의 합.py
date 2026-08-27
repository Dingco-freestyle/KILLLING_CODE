import sys
# sys.stdin=open("input.txt","rt")
# 원인 1. arr=list는 range(arr) 사용 불가
# Tip : str(문자열)도 반복가능한 자료형이라 for문에서 한 글자씩 꺼내쓰기 가능

def digit_sum(x) :
    m=x
    tmp=0
    for i in str(m) :
        tmp+=int(i)
    return tmp

if __name__=="__main__" :
    n=int(input())
    arr=list(map(int,input().split()))
    max=-2147000000

    for i in arr :
        x=digit_sum(i)
        if x>max :
            max=x
            res=i
    print(res)
