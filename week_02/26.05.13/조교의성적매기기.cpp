// 조교의 성적 매기기

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	vector<string> grade = {
		"A+", "A0", "A-",
		"B+", "B0", "B-",
		"C+", "C0", "C-",
		"D0"
	};

	for (int i = 1; i <= T; i++) {
		int N, k;
		cin >> N >> k;
		int rank = 1;

		vector<float> V;

		for (int i = 0; i < N; i++) {
			int s1, s2, s3;
			cin >> s1 >> s2 >> s3; // N명의 점수 입력 받기
			float total;

			total = (s1 * 0.35) + (s2 * 0.45) + (s3 * 0.2);

			V.push_back(total);
		}
		float tmp = V[k-1]; // 벡터는 0번째 부터이기 때문

		sort(V.begin(), V.end(), greater<float>());

		for (int i = 0; i < V.size(); i++) {
			if (V[i] == tmp) {
				rank = i;
				break;
			}
		}

		int percentage = N / 10;
		int grade_idx = rank / percentage;

		/*
		(비효율적)
		if(rank <= N * 0.1)
			// k번째 학생 점수가 상위 10%이면
			cout << "#" << i << ' ' << "A+" << "\n";
		else if(rank <= N * 0.2)
			cout << "#" << i << ' ' << "A0" << "\n";
		else if(rank <= N * 0.3)
			cout << "#" << i << ' ' << "A-" << "\n";
		else if(rank <= N * 0.4)
			cout << "#" << i << ' ' << "B+" << "\n";
		else if(rank <= N * 0.5)
			cout << "#" << i << ' ' << "B0" << "\n";
		else if(rank <= N * 0.6)
			cout << "#" << i << ' ' << "B-" << "\n";
		else if(rank <= N * 0.7)
			cout << "#" << i << ' ' << "C+" << "\n";
		else if (rank <= N * 0.8)
			cout << "#" << i << ' ' << "C0" << "\n";
		else if (rank <= N * 0.9)
			cout << "#" << i << ' ' << "C-" << "\n";
		else 
			cout << "#" << i << ' ' << "D0" << "\n";
		*/
		cout << "#" << i << " " << grade[grade_idx] << "\n";
	}
	return 0;
}