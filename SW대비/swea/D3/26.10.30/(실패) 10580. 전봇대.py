import sys
sys.stdin = open("input.txt", "rt")

if __name__ == "__main__":
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        data=[]
        res=0
        for _ in range(n) :
            a,b=map(int,input().split())

            for da,db in data :
                if (a<da and b>db) or (a>da and b<db) :
                    res+=1
            data.append((a,b))


        print(f"#{tc} {res}")