# import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        n=int(input())
        arr=[]
        for i in range(1,int(n**2)) :
            if n%i==0 :
                arr.append((i-1)+(n//i-1))
        print(min(arr))