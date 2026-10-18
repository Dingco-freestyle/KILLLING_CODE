import sys

sys.stdin = open("input.txt")


def func2(x):
    res = ""
    for i in range(4):
        res = str(x % 2) + res
        x //= 2
    return res


def func1(s):
    res = ""
    for x in s:
        if x.isdecimal():
            res += func2(int(x))
        else:
            res += func2(dict[x])
    return res


if __name__ == "__main__":
    t = int(input())
    dict = {"A": 10, "B": 11, "C": 12, "D": 13, "E": 14, "F": 15}
    for tc in range(t):
        n, s = map(str, input().split())
        n = int(n)
        res = func1(s)
        print(f"#{tc + 1} {res}")
