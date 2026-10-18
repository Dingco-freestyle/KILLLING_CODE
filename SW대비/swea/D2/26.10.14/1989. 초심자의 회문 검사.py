# import sys
# sys.stdin = open("input.txt")
def palindrome(x) :
    y=x[::-1]
    if x==y :
        return True
    else :
        return False
if __name__ == "__main__":
    t=int(input())
    for tc in range(t) :
        s=input()
        if palindrome(s) :
            print(f"#{tc+1} {1}")
        else :
            print(f"#{tc+1} {0}")
