import sys

# sys.stdin = open("input.txt", "rt")

# 그리디 알고리즘 : 문제를 푸는 단계에서 가장 좋은 것을 선택
# 그리디 문제는 대부분 정렬과 동반

#회의가 끝나는 시간이 짧은 기준으로 정렬
n=int(input())
meeting=[]

for i in range(n) :
    s,e=map(int,input().split())
    meeting.append((s,e)) # 튜플형태로 저장

meeting.sort(key=lambda x: (x[1],x[0])) #정렬 순위를 끝나는시간으로 설정

et=0 # endtime : 회의를 했던 시간
cnt=0

for s,e in meeting :
    if s>=et : #회의 시작 시간이 이전 회의 끝나는 시간 보다 크거나 같은지 확인
        et=e
        cnt+=1

print(cnt)
