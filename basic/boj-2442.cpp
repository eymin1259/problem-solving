
#include <iostream>
using namespace std;

int main(){
  // n이 주어질때 삼각형 너비 : 2n -1 = (n-1) + 1 + (n-1)
  int n =0;
  cin >>n;
  for(int i=1; i<=n; i++){
    // 앞 빈칸
    for(int a=1; a<=(n-i); a++){
      cout << " ";
    }
    // 가운데 별
    for(int b=1; b<=((2*i)-1); b++){
      cout <<"*";
    }
    cout <<endl;
  }
  return 0;
}
