// 배수판별 알고리즘
// input : A (최대 999자리 자연수), B (최대 5자리 자연수)
// output : A가 B의 배수이면 1 출력, 아니면 0 출력

#include<iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int tt = 0;
	cin >> tt;
	for (int ttt = 0; ttt < tt; ttt++) {

		string bignum; // 최대 999자리 자연수
		cin >> bignum;

		int smallnum = 0; // small < 100 000 자연수
		cin >> smallnum; // small은 100 000 미만이므로 최대 5자리 
 
		vector<string> bigbigint; // 5자리마다 나눠서 저장 -> 6자리 이상 나눠서 저장하면 추후 나눗셈 연산시 int 자료형 범위 떄문에 오버플로우 발생
		int idx = 4;
		while (idx < bignum.size()) {
			bigbigint.push_back(bignum.substr(idx -4, 5)); // 5자리씩 저장
			idx += 5;
		}
		idx -= 4;
		if ((bignum.size() - idx) > 0) {
			bigbigint.push_back(bignum.substr(idx, bignum.size() - idx)); // 나머지
		}

		int val = 0; // 나눌값
		int reminder = 0; // 나머지

		for (int i = 0; i < bigbigint.size(); i++) {
			
			if (i == bigbigint.size() - 1) {  // 앞에서 남은거에다가 나머지 숫자 붙이기
				int ten = 1;
				int roop = bigbigint[i].size();
				while (roop > 0) {
					ten *= 10;
					roop--;
				}
				val = stoi(bigbigint[i]) + (reminder * ten);
			}
			else { // 앞에서 남은거에다가 다음 5자리 붙이기
				val = stoi(bigbigint[i]) + reminder * 100000;
			}
			reminder = val % smallnum;			
				
		}
		if (reminder == 0) { // 나머지 없으므로 배수 true!
			cout << "1" << endl;
		}
		else
			cout << "0" << endl;
	}

	return 0;
}
