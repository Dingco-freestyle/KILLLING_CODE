import sys
# sys.stdin=open("input.txt","rt")

if __name__=="__main__" :
    s=input()
    stack=[]
    for x in s :
        if x.isdecimal() :
            stack.append(x)
        else :
            a=int(stack.pop())
            b=int(stack.pop())

            if x=='*' :
                stack.append(a*b)
            elif x=='/' :
                stack.append(b//a)
            elif x=='+' :
                stack.append(a+b)
            elif x=='-' :
                stack.append(b-a)
    print(stack.pop())