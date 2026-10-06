import sys
sys.stdin=open("input.txt","rt")

# 리스트화 없이 문자열 써도 되지만 문자열은 수정불가!
if __name__=="__main__" :
    s=input()
    stack=[]

    cnt=0
    for i in range(len(s)) :
        if s[i]=='(' :
            stack.append(s[i])
        else :
            stack.pop()
            if s[i-1]=='(' :
                cnt+=len(stack)
            else :
                cnt+=1
    print(cnt)

