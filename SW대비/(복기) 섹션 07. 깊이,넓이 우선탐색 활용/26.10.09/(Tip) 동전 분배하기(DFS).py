import sys
sys.stdin=open("input.txt")
# Tip. 중복제거 set() 사용
def dfs(L) :
    global tot
    if L==n :
        cha=max(abc)-min(abc)
        if cha<tot :
            tmp=set()
            for x in abc :
                tmp.add(x)
            if len(tmp)==3 :
                if tot>cha :
                    tot=cha
    else :
        for i in range(3) :
            abc[i]+=coin[L]
            dfs(L+1)
            abc[i]-=coin[L]
if __name__=="__main__" :
    n=int(input())
    coin=[]
    abc=[0]*3
    for i in range(n) :
        v=int(input())
        coin.append(v)
    tot=2147000000
    dfs(0)
    print(tot)