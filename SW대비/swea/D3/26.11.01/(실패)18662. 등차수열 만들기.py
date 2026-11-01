import sys
sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        li=list(map(int,input().split()))
        fn=float(abs(2*li[1]-li[2]-li[0]))
        sn=float(abs((li[0]+li[2])/2-li[1]))
        tn=float(abs(2*li[1]-li[0]-li[2]))

        ans=min(fn,sn,tn)
        if ans==0.0 :
            ans=0
        print(ans)





#  y - x = z - y
# b-x = c-b

# k=2*y-z-x
# k=(x+z)/2-y
# k=2y-x-z

# y-x+k=z-y
