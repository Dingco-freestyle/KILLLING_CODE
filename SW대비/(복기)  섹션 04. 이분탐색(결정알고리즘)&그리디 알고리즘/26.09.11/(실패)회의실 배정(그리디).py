import sys
# sys.stdin=open("input.txt","rt")
# 그리디 알고리즘 : 문제를 푸는 단계에서 가장 좋은 것을 선택
# 그리디 문제는 대부분 정렬과 동반
# 원인1. 끝나는 시간순으로 정렬하는법 :
# meeting.sort(key=lambda x : (x[1],x[0]))

if __name__ == "__main__" :
    n=int(input())
    meeting=[]
    for i in range(n) :
        s,e=map(int,input().split())
        meeting.append((s,e))
    meeting.sort(key=lambda x : (x[1],x[0]))

    et=0
    cnt=0
    for s,e in meeting :
        if s>=et :
            et=e
            cnt+=1
    print(cnt)