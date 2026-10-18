# import sys
# sys.stdin = open("input.txt")
def dfs(idx) :
    global v
    if idx>n or idx<0 :
        return

    dfs(idx*2)
    tree[idx]=v
    v+=1
    dfs(idx*2+1)

if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        n=int(input())
        tree=[0]*(n+1)

        v=1
        dfs(1)
        print(f"#{tc+1} {tree[1]} {tree[n//2]}")