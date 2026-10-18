import sys
sys.stdin=open("input.txt","rt")
# 미래에서부터 생각
if __name__=="__main__" :
    t=int(input())
    for i in range(t) :
        n=int(input())
        prices=list(map(int,input().split()))
        tot=0
        max=0
        for price in reversed(prices) :
            if price>max :
                max=price
            else :
                tot+=(max-price)
        print("# %d %d" %((i+1),tot))