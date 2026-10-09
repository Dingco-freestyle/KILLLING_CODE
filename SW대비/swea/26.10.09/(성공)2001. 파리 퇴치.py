# import sys
# sys.stdin=open("input.txt")
if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n, m = map(int, input().split())
        board = [list(map(int, input().split())) for _ in range(n)]

        paris = []
        for j in range(n - m + 1):
            for k in range(n - m + 1):
                tot = 0
                for x in range(m):
                    for y in range(m):
                        tot += board[j + x][k + y]
                paris.append(tot)
        print("#%d %d" % ((i + 1), max(paris)))