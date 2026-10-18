import sys

sys.stdin = open("input.txt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        str1 = input()
        str2 = input()
        print(f"#{tc + 1}", end=" ")
        if str1 in str2:
            print(1)
        else:
            print(0)
