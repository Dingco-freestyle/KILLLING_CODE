# import sys
# sys.stdin=open("input.txt")
if __name__=="__main__" :
    t=int(input())
    for i in range(t) :
        ch = [0] * (1001)
        n = int(input())
        arr=list(map(int,input().split()))
        for x in arr :
            ch[x]+=1
        MAX=0
        for j in range(len(ch)) :
            if ch[j]>=MAX :
                MAX=ch[j]
                res=j
        print("#%d %d" %(n, res))