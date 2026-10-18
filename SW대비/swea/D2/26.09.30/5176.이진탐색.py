import sys
sys.stdin=open("input.txt","rt")

def in_order(n) :
    global value
    if n<=N :
        # 왼쪽자식
        in_order(n*2)
        tree[n]=value
        value+=1

        #오른쪽자식
        in_order((n*2+1))

if __name__=="__main__" :
    t=int(input())
    for i in range(t) :
        N=int(input())

        tree=[0]*(N+1)
        value=1 # 시작값
        in_order(1)
        print(tree)
        print("#%d %d %d" %((i+1),tree[1],tree[N//2]))