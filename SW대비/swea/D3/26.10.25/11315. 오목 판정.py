# import sys
# sys.stdin = open("input.txt")
def dfs(x, y, k, cnt):
    global res
    if cnt == 5:
        res = "YES"
    else:
        xx = x + dx[k]
        yy = y + dy[k]
        if 0 <= xx < n and 0 <= yy < n and board[xx][yy] == "o":
            dfs(xx, yy, k, cnt + 1)


if __name__ == "__main__":
    t = int(input())
    dx = [1, 1, 1, 0, -1, -1, -1, 0]
    dy = [1, 0, -1, -1, -1, 0, 1, 1]
    for tc in range(t):
        n = int(input())
        board = [[0 for _ in range(n)] for _ in range(n)]
        k = 0
        for i in range(n):
            s = input()
            board[k] = s
            k += 1
        flag = 0
        res="NO"
        for i in range(n):
            for j in range(n):
                if board[i][j] == 'o':
                    for k in range(8):
                        xx = i + dx[k]
                        yy = j + dy[k]
                        if 0 <= xx < n and 0 <= yy < n and board[xx][yy] == 'o':
                            dfs(xx, yy, k, 2)

        print(f"#{tc + 1} {res}")
