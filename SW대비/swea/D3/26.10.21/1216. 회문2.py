# import sys
# sys.stdin = open("input.txt")
def palindrome(ss):
    global res
    if ss == ss[::-1]:
        if res < len(ss):
            res = len(ss)


if __name__ == "__main__":
    for tc in range(1, 11):
        n = int(input())
        board = [list(input()) for _ in range(100)]

        res = 0
        tmp = ""
        for i in range(100):
            for j in range(100):
                for k in range(j + 1, 101):
                    tmp = board[i][j:k]
                    palindrome(tmp)
        tmp = ""
        for i in range(100):
            for j in range(100):
                tmp = ""
                for k in range(j, 100):
                    tmp += board[k][i]
                    palindrome(tmp)
        print(f"#{n} {res}")

