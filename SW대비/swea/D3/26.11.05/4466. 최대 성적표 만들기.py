# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n,k=map(int,input().split())
        score=list(map(int,input().split()))
        score.sort(reverse=True)
        print(f"#{tc} {sum(score[:k])}")