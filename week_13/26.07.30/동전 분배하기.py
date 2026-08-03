import sys
# sys.stdin=open("input.txt","rt")
input=sys.stdin.readline

def DFS(L):
    global res
    if L==n :
        cha=max(money)-min(money)
        if cha<res :
            tmp=set() # money에 있는 3개의 금액이 서로 달라야함
            # set() 중복을 허락하지 않으므로 금액이 서로 다르면 len=3
            for x in money :
                tmp.add(x)
            if len(tmp)==3 : # 금액이 서로 다를 때
                res=cha
    else :
        for i in range(3) :
            money[i]+=coin[L]
            DFS(L+1)
            money[i]-=coin[L]


if __name__=="__main__":
    n=int(input())
    coin=[]
    for i in range(n) :
        a=int(input())
        coin.append(a)
    money=[0,0,0]

    res=2147000000
    DFS(0)
    print(res)