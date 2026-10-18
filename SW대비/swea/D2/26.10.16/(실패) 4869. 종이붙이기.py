import sys
sys.stdin = open("input.txt")
# 점화식 사용
def function(x) :
    if x%10==0 :
        if x==10 :
            return 1
        elif x==20 :
            return 3
        else :
            return function(x-10)+2*function(x-20)
if __name__=="__main__" :
    t=int(input())
    for tc in range(t) :
        n=int(input())
        res=function(n)
        print(f"#{tc+1} {res}")