import sys

# sys.stdin = open("input.txt", "rt")

a=input()
stack=[]
res=''

for x in a:
    if x.isdecimal() : #10진수인지 확인(피연산자)
        res+=x
    else :
        if x=='(' :
            stack.append(x)

        elif x=='*' or x=='/' :
            while stack and (stack[-1]=='*' or stack[-1]=='/') :
                res+=stack.pop()
            stack.append(x)

        elif x=='+' or x=='-' :
            while stack and stack[-1]!='(' :
                res+=stack.pop()
            stack.append(x)

        elif x==')' :
            while stack and stack[-1]!='(' :
                res+=stack.pop()
            stack.pop()

while stack :
    res+=stack.pop()

print(res)

# 3+5*2/(7-2)
# 352*72-/+
