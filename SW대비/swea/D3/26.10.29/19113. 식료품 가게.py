# import sys
# sys.stdin=open("input.txt","rt")
if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        n=int(input())
        arr=list(map(int,input().split()))
        sale=[]
        s=0
        while True :
            if s>=n*2 :
                break
            m=arr[s]
            for i in range(s+1,len(arr)) :
                if m!=0 and int(m*(4/3))==arr[i] :
                    sale.append(m)
                    arr[i]=0
                    break
            s+=1

        print(f"#{tc+1}",end=" ")
        print(*sale)

# 3/4 4/3