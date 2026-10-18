# import sys
# sys.stdin=open("input.txt")
if __name__=="__main__" :
    n=int(input())
    game=["3","6","9"]
    for i in range(1,n+1) :
        x=str(i)
        cnt=0
        for j in x :
            if j in game :
                cnt+=1
        if cnt :
            y="-"*cnt
        else :
            y=x
        print(y,end=" ")