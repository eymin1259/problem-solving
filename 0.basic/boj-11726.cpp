#include <iostream>
#include <vector>
using namespace std;

vector<int> D(1001);

int solve(int n);

int main() {
  int N=0;
  cin >> N;
  int res = solve(N);
  cout << res << endl;
}

int solve(int n){
  if(n ==1 ){
    return 1;
  }
  if(n == 2){
    return 2;
  } 
  if(D[n]!=0){
    return D[n];
  }

  return D[n]= (solve(n-2)+solve(n-1)) % 10007;
}
