# import sys
# sys.stdin=open("input.txt","rt")
def reverse(s) :
    k=s[::-1]
    if s==k :
        return True
    return False
if __name__=="__main__" :
    t=int(input())
    for tc in range(1,t+1) :
        s=input()
        if reverse(s) :
            n=len(s)
            m=(n-1)//2
            if reverse(s[:m]) and reverse(s[n-m:]) :
                res="YES"
            else :
                res="NO"
        else :
            res="NO"
        print(f"#{tc} {res}")