# import sys
# sys.stdin = open("input.txt", "rt")
if __name__=="__main__" :
    n=int(10e5)
    res=[0]*(n+1)
    res[0],res[1]=1,1
    for i in range(2,n//2+1) :
        if res[i]==0 :
            for k in range(i*2,n+1,i) :
                res[k]=1

    for i in range(len(res)) :
        if res[i]==0 :
            print(i,end=" ")

