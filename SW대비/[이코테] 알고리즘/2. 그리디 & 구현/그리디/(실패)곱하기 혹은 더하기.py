import sys
sys.stdin = open("input.txt")

if __name__=="__main__" :
    s=input()
    n=len(s)
    res=int(s[0])
    for i in range(1,n) :
        num=int(s[i])
        if res<=1 or num<=1 :
            res+=num
        else :
            res*=num
    print(res)