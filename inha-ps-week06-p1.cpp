// ps week06 p1 - determine if A(A<10^1000) is a multiple of B(B<100000)
// input : two natural numbers A, B ( A < 10^1000, B<100000)
// output : if A is a multiple of B, then print 1 else 0

#include<iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	std::ios::sync_with_stdio(false);

	int tt = 0;
	cin >> tt;
	for (int ttt = 0; ttt < tt; ttt++) {

		string bignum; // A < 10^1000
		cin >> bignum;

		int smallnum = 0; // B < 100 000
		cin >> smallnum; // small은 100 000 미만이므로 최대 5자리 
 
		vector<string> bigbigint; // 4자리마다 나눠서 저장 -> 5자리 이상 나눠서 저장하면 추후 나눗셈 연산시 int 자료형 범위 떄문에 오버플로우 발생
		int idx = 4;
		while (idx < bignum.size()) {
			bigbigint.push_back(bignum.substr(idx -4, 4)); // 4자리씩 저장
			idx += 4;
		}
		idx -= 4;

		if ((bignum.size() - idx) > 0) { // 4자리 미만의 수가 남은경우
			bigbigint.push_back(bignum.substr(idx, bignum.size() - idx)); // 나머지 저장
		}

		int val = 0; // 나눌값
		int remainder = 0; // 나머지

		for (int i = 0; i < bigbigint.size(); i++) {
			
			if (i == bigbigint.size() - 1) {  // 앞에서 남은거에다가 나머지 숫자 붙이기
				int ten = 1;
				int roop = bigbigint[i].size();
				while (roop > 0) {
					ten *= 10;
					roop--;
				}
				val = stoi(bigbigint[i]) + (remainder * ten);
			}
			else { // 앞에서 남은거(reminder*10000) 다음 4자리 붙이기
				val = stoi(bigbigint[i]) + remainder * 10000;
			}
			remainder = val % smallnum;
		}

		if (remainder == 0) { // 나머지 없으므로 배수 true!
			cout << 1 << endl;
		}
		else
			cout << 0 << endl;
	}
	return 0;
}
