# import sys
# sys.stdin=open("input.txt","rt")
def palindrom(x) :
    y=str(x)
    if y==y[::-1] :
        return True
    else :
        return False
if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        a,b=map(int,input().split())
        res=0
        for i in range(a,b+1) :
            if palindrom(i) and i**0.5==int(i**0.5) and palindrom(int(i**0.5)) :
                res+=1
        print(f"#{tc} {res}")
