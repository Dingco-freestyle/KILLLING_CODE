import sys
sys.stdin = open("input.txt")
# 슬라이싱 활용

if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        s=list(input())
        for i in range(1,31) :
            if s[:i]==s[i:i*2] :
                print(f"#{tc+1} {i}")
                break
