import sys

# sys.stdin = open("input.txt", "rt")

n = input()
stack = []
c = 0

for x in n:
    if x.isdecimal():
        stack.append(int(x))
    else:
        a = stack.pop()
        b = stack.pop()

        if x == '+':
            c = b + a
        elif x == '-':
            c = b - a
        elif x == '*':
            c = b * a
        elif x == '/':
            c = b / a

        stack.append(c)

res = stack.pop()
print(res)

