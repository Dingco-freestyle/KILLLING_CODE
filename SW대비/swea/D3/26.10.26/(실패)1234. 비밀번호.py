import sys
sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    for tc in range(1,11) :
        n,s=input().split()
        n=int(n)
        s=list(s)
        stack=[]
        stack.append(s[0])
        for i in range(1,n) :
            if stack :
                if stack[-1]==s[i] :
                    stack.pop()
                else :
                    stack.append(s[i])
            else :
                stack.append(s[i])
        res=""
        for x in stack :
            res+=x
        print(f"#{tc} {res}")