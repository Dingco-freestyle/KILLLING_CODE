import sys
sys.stdin=open("input.txt","rt")
# 누적합 :
# 앞의 값을 뒤로 계속 전달한다"는 성질이 있어서,
# 시작점에 +1만 찍어도 구간 전체에 퍼지고, 끝 다음에 -1을 찍으면 거기서 멈추는 겁니다.
if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        cnt=[0]*5002
        for _ in range(n) :
            a,b=map(int,input().split())
            cnt[a]+=1
            cnt[b+1]-=1
        for i in range(1,5001) :
            cnt[i]+=cnt[i-1]
        p=int(input())
        res=[cnt[int(input())] for _ in range(p)]
        print(f"#{tc}", *res)


