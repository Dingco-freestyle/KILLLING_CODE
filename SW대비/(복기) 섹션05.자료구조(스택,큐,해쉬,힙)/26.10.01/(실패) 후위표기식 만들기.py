import sys
sys.stdin=open("input.txt","rt")
# 스택에 연산자를 넣는다
# 넣기전에 더 높은 우선순위가 있으면 토해낸다
if __name__=="__main__" :
    s=input()
    stack=[]
    res=""
    for x in s :
        if x.isdecimal() : #10진수 문자 판별
            res+=x
        else :
            if x=="(" :
                #우선순위 가장 높아서 토해낼거 없음.
                # but 다른 연산자가 나올때 '('는 ')'가 나오기 전까지
                # 토해내지 않음.
                stack.append(x)
            elif x=="*" or x=="/" :
                while stack and (stack[-1]=="*" or stack[-1]=="/") :
                    res+=stack.pop() # 같은 우선순위 *이나 / 토해냄
                stack.append(x)
            elif x=="+" or x=="-" : #우선순위 제일 낮음
                while stack and stack[-1]!='(' :
                    res+=stack.pop() # 같거나 높은 우선순위 토해냄
                stack.append(x)
            elif x==")" :
                while stack and stack[-1]!='(' :
                    res+=stack.pop() #'(' 나오기 전까지 다 토해냄
                stack.pop() #'(' 제거

    while stack : # 스택에 남은 연산자 빼냄
        res+=stack.pop()
    print(res)