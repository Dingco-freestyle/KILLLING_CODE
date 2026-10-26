import sys
sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        N=int(input())
        week=list(map(int,input().split()))
        min_result=float('inf')
        for i,val in enumerate(week) :
            if val==1 :
                result=0
                index=i
                temp=N
                while temp :
                    if week[index]==1 :
                        temp-=1
                    index=(index+1)%7
                    result+=1
                min_result=min(result,min_result)
        print(min_result)