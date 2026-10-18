# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        arr = list(input())
        res = []
        tmp = 1
        for x in arr:
            if x == "{" or x == "(":
                res.append(x)

            if x == "}":
                if not res :
                    tmp=0
                    break

                if res[-1] == "{":
                    res.pop()
                else:
                    tmp = 0
                    break
            elif x == ")":
                if not res :
                    tmp=0
                    break
                if res[-1] == "(":
                    res.pop()
                else:
                    tmp = 0
                    break
        if res:
            tmp = 0

        print(f"#{tc + 1} {tmp}")
