import sys
sys.stdin=open("input.txt","rt")

def binary_change(n) :
    cnt=0
    result=""
    a=1

    while n :
        if n<2**-a :
            result+="0"
        else :
            n-=2**-a
            result+="1"
        cnt+=1
        if cnt>12 :
            return "overflow"
        else :
            a+=1

    return result

if __name__=="__main__" :
   t=int(input())

   for i in range(t) :
       n=float(input())
       m=binary_change(n)
       print("#%d %s" %(i+1,m))