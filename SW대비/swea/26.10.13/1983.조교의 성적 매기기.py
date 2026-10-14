import sys
sys.stdin = open("input.txt")
if __name__ == "__main__":
    t = int(input())
    grade = ['A+', 'A0', 'A-', 'B+', 'B0', 'B-', 'C+', 'C0', 'C-', 'D0']
    for tc in range(t):
        n, k = map(int, input().split())
        cnt = n // 10
        score = []

        for i in range(n):
            s1, s2, s3 = map(int, input().split())
            tot = s1 * 0.35 + s2 * 0.45 + s3 * 0.2
            score.append(tot)
        k_score=score[k-1]
        score.sort(reverse=True)
        res=grade[score.index(k_score)//cnt]
        print(f"#{tc+1} {res}")


# 내가 푼 풀이
# # import sys
# # sys.stdin = open("input.txt")
# if __name__ == "__main__":
#     t = int(input())
#     grade = ['A+', 'A0', 'A-', 'B+', 'B0', 'B-', 'C+', 'C0', 'C-', 'D0']
#     for tc in range(t):
#         n, k = map(int, input().split())
#         cnt = n // 10
#         score = []
#
#         for i in range(n):
#             s1, s2, s3 = map(int, input().split())
#             tot = s1 * 0.35 + s2 * 0.45 + s3 * 0.2
#             score.append((tot, i))
#
#         score.sort(reverse=True)
#
#         r, m = 0, 0
#         res = []
#         for (x, idx) in score:
#             if r == cnt:
#                 m += 1
#                 r = 0
#             r+=1
#             res.append((idx, grade[m]))
#
#         print("#%d" %(tc+1),end=" ")
#         for i in range(n) :
#             if res[i][0]==k-1 :
#                 print(res[i][1])
#                 break
