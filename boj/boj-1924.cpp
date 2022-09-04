
#include <iostream>
#include <vector>

using namespace std;

int main(){
  int x =0;
  int y = 0;
  cin >> x >> y;
  int date =0;
  
  while( x >0 ){
    if( x ==1 ){
      x--;
    }
    else if ( x== 3){
      x--;
      date += 28;
    }
    else if( x==2 || x == 4 || x == 6 || x== 8 || x == 9 || x == 11){
      x--;
      date += 31;
    }

    else {
      x--;
      date += 30;
    }


    
  }
  date += y;

  int res = date % 7;

  if( res == 0){
 cout << "SUN" <<endl;
  } else if( res == 1){
      cout << "MON" <<endl;
  } else if ( res == 2){
       cout << "TUE" <<endl;
  } else if (res == 3){
 cout << "WED" <<endl;
  } else if (res == 4){
 cout << "THU" <<endl;
  }else if (res == 5){
 cout << "FRI" <<endl;
  }else if (res == 6){
 cout << "SAT" <<endl;
  }


  return 0;
}
