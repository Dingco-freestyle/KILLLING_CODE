import sys

sys.stdin = open("input.txt", "rt")


def recursive_snail(x, y, d, num):
    arr[x][y] = num
    nx = x + dx[d]
    ny = y + dy[d]

    if num == n * n:
        return
    if nx < 0 or nx >= n or ny < 0 or ny >= n or arr[nx][ny] != 0:
        d = (d + 1) % 4
        recursive_snail(x, y, d, num)
    else:
        recursive_snail(nx, ny, d, num + 1)


if __name__ == "__main__":
    t = int(input())
    dx = [0, 1, 0, -1]
    dy = [1, 0, -1, 0]

    for i in range(t):
        n = int(input())
        arr = [[0] * n for _ in range(n)]

        recursive_snail(0, 0, 0, 1)

        print("#%d" % (i + 1))
        for a in arr:
            print(*a)
        print()

