import sys

sys.stdin = open("input.txt", "rt")

# 재귀함수는 반복문의 대체제 ex)3중,4중 for문
# 재귀함수는 스택을 사용
def DFS(x) :
    if x>0 :
        DFS(x-1)
        print(x,end=' ')

if __name__=="__main__":
    n=int(input())
    DFS(n)