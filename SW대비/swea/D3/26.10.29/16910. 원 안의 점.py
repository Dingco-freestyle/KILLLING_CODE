# import sys
# sys.stdin=open("input.txt","rt")
if __name__ == "__main__" :
    t=int(input())
    for tc in range(t) :
        n=int(input())
        res=0
        for i in range(n+1) :
            for j in range(n+1) :
                if ((i**2)+(j**2))**(1/2)<=n :
                    res+=1

        res=4*res-4*n-3
        print(f"#{tc+1} {res}")