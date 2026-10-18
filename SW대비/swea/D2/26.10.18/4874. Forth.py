# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(t) :
        arr=list(input().split())
        stack=[]
        for x in arr :
            if x.isdecimal() :
                stack.append(int(x))
            else :
                if stack :
                    if x=='.' :
                        res=stack.pop()
                        if stack :
                            res="error"
                        else :
                            break
                    elif x=='+' :
                        a=stack.pop()
                        if stack :
                            b=stack.pop()
                        else :
                            res="error"
                            break
                        stack.append(a+b)
                    elif x=="-" :
                        a = stack.pop()
                        if stack:
                            b = stack.pop()
                        else:
                            res = "error"
                            break
                        stack.append(b-a)
                    elif x=="*" :
                        a = stack.pop()
                        if stack:
                            b = stack.pop()
                        else:
                            res = "error"
                            break
                        stack.append(a*b)
                    elif x=='/' :
                        a = stack.pop()
                        if stack:
                            b = stack.pop()
                        else:
                            res = "error"
                            break
                        stack.append(b//a)
                else :
                    res="error"
                    break
        print(f"#{tc+1} {res}")
