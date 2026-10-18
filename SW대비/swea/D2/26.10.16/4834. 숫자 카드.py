# import sys
# sys.stdin = open("input.txt")

if __name__ == "__main__":
    t = int(input())
    for tc in range(t):
        n = int(input())
        s = input()
        res = [0] * 10
        for x in s:
            res[int(x)] += 1
        MAX=0
        MAX_IDX=0
        for i in range(len(res)) :
            if MAX<=res[i] :
                MAX=res[i]
                MAX_IDX=i
        print(f"#{tc+1} {MAX_IDX} {MAX}")