# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        S=[0 for _ in range(14)]
        D=[0 for _ in range(14)]
        H=[0 for _ in range(14)]
        C=[0 for _ in range(14)]

        s=input()
        idx=0
        flag=0
        res=""
        for i in range(0,len(s),3) :
            if s[i]=='S' :
                idx=int(s[i+1]+s[i+2])
                if S[idx]==1 :
                    res="ERROR"
                    flag=1
                    break
                S[idx]+=1
            elif s[i]=='D' :
                idx = int(s[i + 1] + s[i + 2])
                if D[idx]==1 :
                    res="ERROR"
                    flag=1
                    break
                D[idx] += 1
            elif s[i]=='H' :
                idx = int(s[i + 1] + s[i + 2])
                if H[idx]==1 :
                    res="ERROR"
                    flag=1
                    break
                H[idx] += 1
            else :
                idx = int(s[i + 1] + s[i + 2])
                if C[idx]==1 :
                    res="ERROR"
                    flag=1
                    break
                C[idx] += 1

        print(f"#{tc}",end=" ")
        if flag :
            print(res)
        else :
            print(13-(sum(S)),end=" ")
            print(13-(sum(D)),end=" ")
            print(13-(sum(H)),end=" ")
            print(13-(sum(C)))



# s d h c