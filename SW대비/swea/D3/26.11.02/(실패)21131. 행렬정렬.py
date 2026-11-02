# import sys
# sys.stdin=open("input.txt","rt")

if __name__ == "__main__":
    T = int(input())
    for test_case in range(1, T + 1):
        N = int(input())
        lst = list(map(int, input().split()))
        for _ in range(N - 1):
            k = input()

        count = 0
        for i in range(N - 1, 0, -1):
            if count % 2 == 0:
                if lst[i] != i + 1:
                    count += 1
            else:
                if lst[i] == i + 1:
                    count += 1
        print(count)