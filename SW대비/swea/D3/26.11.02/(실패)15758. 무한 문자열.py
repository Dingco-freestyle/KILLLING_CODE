import sys
sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        S,T=map(str,input().split())
        s_len=len(S)
        t_len=len(T)
        if S*t_len==T*s_len :
            res="yes"
        else :
            res="no"
        print(f"#{tc} {res}")