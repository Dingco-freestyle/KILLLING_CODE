# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        n,m=map(int,input().split())
        case1=list(map(int,input().split()))
        case2=list(map(int,input().split()))
        MAX=-2147000000

        max_len=max(n,m)
        min_len=min(n,m)
        if max_len==len(case1) :
            max_case=case1
        else :
            max_case=case2
        if min_len==len(case1) :
            min_case=case1
        else :
            min_case=case2

        tot=0
        for i in range(max_len-min_len+1) :
            tot=0
            for j in range(len(min_case)) :
                tot+=min_case[j]*max_case[i+j]
            if tot>MAX :
                MAX=tot
        print("#%d %d" %((tc+1), MAX))