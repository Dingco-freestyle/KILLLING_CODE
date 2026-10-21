import sys
sys.stdin = open("input.txt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        n, m, k = map(int, input().split())
        t = list(map(int, input().split()))
        t.sort()
        visited=[0]*11112
        for x in t :
            visited[x]+=1
        tmp=0
        res="Possible"
        for i in range(11112) :
            if i>0 and i%m==0 :
                tmp+=k
            tmp-=visited[i]
            if tmp<0 :
                res="Impossible"
                break
        print(f"#{tc+1} {res}")
