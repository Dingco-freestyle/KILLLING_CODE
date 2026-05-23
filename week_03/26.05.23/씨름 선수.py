import sys

# sys.stdin = open("input.txt", "rt")

# 그리디 알고리즘 : 문제를 푸는 단계에서 가장 좋은 것을 선택
# 그리디 문제는 대부분 정렬과 동반

# 키 순으로 내림차순 정렬해서 윗사람들만 비교
# 몸무게만 최대값을 구한다고 생각하고 풀이
N=int(input())
a=[]
for i in range(N) :
    x,y=map(int,input().split())
    a.append((x,y))

a.sort(reverse=True)
cnt=0
largest=0
for x,y in a :
    if y>largest :
        largest=y
        cnt+=1


print(cnt)