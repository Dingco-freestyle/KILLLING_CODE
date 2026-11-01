# import sys
# sys.stdin = open("input.txt", "rt")
if __name__=="__main__" :
    t=int(input())
    dict={"ZRO":0, "ONE":1, "TWO":2, "THR":3, "FOR":4, "FIV":5, "SIX":6, "SVN":7, "EGT":8, "NIN":9 }
    for tc in range(1,t+1) :
        s,n=input().split()
        res=[]
        word=list(input().split())
        for x in word :
            res.append((dict[x],x))
        res.sort()
        print(f"#{tc}",end=" ")
        for x in res :
            print(x[1],end=" ")
        print()

