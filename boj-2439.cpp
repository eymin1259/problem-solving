#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  for(int i=1; i<=n; i++){
    int j;
    int k;
    for( j=1; j<=(n-i); j++){
      cout << " ";
    }
    for(k=1; k<=i; k++ ){
      cout << "*";
    }
    cout <<endl;
  }
  return 0;
}
