import sys
# sys.stdin=open("input.txt","rt")
# 문제 파악 잘하기
if __name__ == "__main__" :
    n=int(input())
    a=[]
    for i in range(n) :
        l,w=map(int,input().split())
        a.append((l,w))
    a.sort(reverse=True)

    largest=0
    cnt=0
    for x,y in a :
        if y>largest :
            # 키는 내림차순 정렬되어있으니 몸무게만 비교해서 큰놈들만 남김
            # 처음놈은 키가 제일 크니 통과과
            cnt+=1
            largest=y
    print(cnt)