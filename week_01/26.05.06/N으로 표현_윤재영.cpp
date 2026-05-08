#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(int N, int number) {
    // 만약 찾고자 하는 숫자가 N과 같다면 1턴 만에 해결
    if (N == number) return 1;

    // dp[i]는 N을 i번 사용하여 만들 수 있는 수들의 집합 (1부터 8까지 사용)
    vector<unordered_set<int>> dp(9);

    // 1. 각 dp[i]에 N을 i번 이어 붙인 숫자 미리 넣어두기
    int base = 0;
    for (int i = 1; i <= 8; i++) {
        base = base * 10 + N;
        dp[i].insert(base);
    }

    // 2. DP 진행
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j < i; j++) {
            // dp[i]는 dp[j]와 dp[i - j]의 원소들을 사칙연산한 결과들의 합집합
            for (int op1 : dp[j]) {
                for (int op2 : dp[i - j]) {
                    dp[i].insert(op1 + op2);
                    dp[i].insert(op1 - op2);
                    dp[i].insert(op1 * op2);
                    if (op2 != 0) {
                        dp[i].insert(op1 / op2);
                    }
                }
            }
        }

        // 이번 턴(i번 사용)에 목표 숫자(number)를 만들었는지 확인
        if (dp[i].count(number)) {
            return i; // 가장 먼저 발견된 i가 최솟값!
        }
    }

    // 8번 넘게 사용해도 못 만들면 -1
    return -1;
}