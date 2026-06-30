import sys

# sys.stdin = open("input.txt", "rt")

# '('다음 바로 ')'나오면 레이저
# -> pop(), sum+=len(s)

# ')'다음 바로 ')'나오면 쇠막대기
# -> pop(), sum+=1

n=input()
sum=0

stack=[]
for i in range(len(n)) :
    if n[i] == "(" :
        stack.append(n[i])

    else :
        stack.pop()
        if n[i-1] == "(" : #레이저
            sum+=len(stack)

        else : #쇠막대기
            sum+=1

print(sum)






