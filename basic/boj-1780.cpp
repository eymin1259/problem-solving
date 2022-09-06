#include <iostream>
#include <vector>
using namespace std;

// 종이 갯수
int Zero =0;
int One = 0;
int MinOne =0;

// (r2-r1+1) x (c2-c1+1) 행렬&
short check(vector< vector<short> >& arr, int r1, int r2, int c1, int c2){ 
  //종이가 모두 같은 수로 있는지 검사
  // 모두 같은 수 이면 해당 수 카운트, 하나라도 다르면 -2

  int size = r2-r1+1;
  short res = arr[r1][c1];

  for(int i=r1; i<=r2; i++){
    if( res == -2){
      break;
    }
    for(int j=c1; j<=c2; j++){
      if( res != arr[i][j]){
        res = -2;
        break;
      }
    }
  }

  if( res == -1)
      MinOne++;
  else if (res == 1)
      One++;
  else if( res == 0)
      Zero++;
  return res;
};

// 
void cut( vector< vector<short> >& arr, int r1, int r2, int c1, int c2){
  int size = r2-r1+1;
  
  // base case - 사이즈 확인
  if( size <3){  // 1x1 행렬 
    check(arr, r1, r2, c1, c2); // 해당 숫자 카운트
    return;
  }
  else{ // 3이상, 자를 수 있을정도로 크기 큼
  // 모두 같은 수 인지 check
    short arrSize = (size/3);
    short chk;
    // 11
      chk = check(arr, r1, (r1+arrSize-1), c1, (c1+arrSize-1));
      if(chk == -2)
        cut(arr, r1, (r1+arrSize-1), c1, (c1+arrSize-1));

    // 12
    chk = check(arr, (r1+arrSize), (r1+arrSize+arrSize-1), c1, (c1+arrSize-1));
    if(chk == -2)
      cut(arr, (r1+arrSize), (r1+arrSize+arrSize-1), c1, (c1+arrSize-1));

    //13 *
    chk = check( arr, (r1+arrSize+arrSize), r2, c1, (c1+arrSize-1));
    if(chk == -2)
     cut( arr, (r1+arrSize+arrSize), r2, c1, (c1+arrSize-1));

    // 21
    chk = check(arr, r1, (r1+arrSize-1), (c1+arrSize), (c1+arrSize+arrSize-1));
    if(chk == -2)
      cut(arr, r1, (r1+arrSize-1), (c1+arrSize), (c1+arrSize+arrSize-1));

    // 22
    chk = check(arr, (r1+arrSize), (r1+arrSize+arrSize-1), (c1+arrSize), (c1+arrSize+arrSize-1));
    if(chk == -2)
      cut(arr, (r1+arrSize), (r1+arrSize+arrSize-1), (c1+arrSize), (c1+arrSize+arrSize-1));

    // 23 *
    chk = check(arr, (r1+arrSize+arrSize), r2, (c1+arrSize), (c1+arrSize+arrSize-1) );
    if(chk == -2)
       cut(arr, (r1+arrSize+arrSize), r2, (c1+arrSize), (c1+arrSize+arrSize-1));

    // 31
    chk = check(arr, r1, (r1+arrSize-1), (c1+arrSize+arrSize), c2);
    if(chk == -2)
      cut(arr, r1, (r1+arrSize-1), (c1+arrSize+arrSize), c2);

    // 32
    chk = check(arr, (r1+arrSize), (r1+arrSize+arrSize-1),(c1+arrSize+arrSize), c2);
    if(chk == -2)
      cut(arr, (r1+arrSize), (r1+arrSize+arrSize-1),(c1+arrSize+arrSize), c2);

    // 33
    chk = check(arr, (r1+arrSize+arrSize), r2,(c1+arrSize+arrSize), c2);
    if(chk == -2)
      cut(arr, (r1+arrSize+arrSize), r2,(c1+arrSize+arrSize), c2);

  }

};

int main(){

  //배열 만들기
int N =0;
cin >> N;
vector<vector<short> > arr;
arr.resize(N);

for(int i=0; i<N; i++){
  for(int j=0; j<N; j++){
    short num;
    cin >> num;
    arr[i].push_back(num);
  }
}

short chk = check(arr, 0, (N-1), 0, (N-1));
if( chk == -2)
  cut(arr, 0, (N-1), 0, (N-1));

cout << MinOne <<endl;
cout << Zero << endl;
cout << One << endl;

return 0;
}
