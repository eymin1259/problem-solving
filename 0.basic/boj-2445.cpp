
#include <iostream>
using namespace std;

int main(){
 int n=0;
 cin >> n;

 for(int i=1; i<=((2*n)-1); i++){

   // 별증가
   if(i < n){
     int a,b; // a+b=n
     a = i;
     b = n-i;
     for(int star=1; star<=a; star++){
       cout <<"*";
     }
     for(int space=1; space<=b; space++){
       cout <<"  ";
     }
     for(int star=1; star<=a; star++){
       cout <<"*";
     }
     cout <<endl;
   }
   else if( i ==n ){
     for(int j=0; j<(2*n); j++)
        cout <<"*";
     cout <<endl;
   }
   else{ //별감소
     int a,b; // a+b=n
     a = i-n; // 1 2 3 ... 
     b = n-a;
     for(int star=1; star<=b; star++){
       cout <<"*";
     }
     for(int space=1; space<=a; space++){
       cout <<"  ";
     }
     for(int star=1; star<=b; star++){
       cout <<"*";
     }
     cout <<endl;
   }
 }

 return 0;
}
