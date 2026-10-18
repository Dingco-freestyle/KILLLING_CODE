# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        n = float(input())
        res = []
        flag = 0
        while True:
            if n == 0:
                break
            if len(res) >= 13:
                flag = 1
            n = n * 2
            if n >= 1:
                n -= 1
                res.append(1)
            else:
                res.append(0)
        print(f"#{tc + 1}", end=' ')
        if flag == 0:
            for x in res:
                print(x, end="")
            print()
        else:
            print("overflow")
