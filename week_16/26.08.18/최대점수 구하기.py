import sys
# sys.stdin=open("input.txt","rt")

#냅색 알고리즘
if __name__=="__main__" :
    n,m=map(int,input().split())
    dy=[0]*(m+1)
    #중복 방지>>2차원
    #실전에서는>>1차원

    for i in range(n) :
        ps,pt=map(int,input().split())

        for j in range(m,pt-1,-1) :
            dy[j]=max(dy[j],dy[j-pt]+ps)

    print(dy[m])