#include<iostream>
using namespace std;

int main(){
    char str[101];
    //cin.getline(변수의 주소, 최대 입력가능 문자수, 종결 문자)
    //<iostream> 에 존재
    //종결 문자를 NULL로 바꿈
    //종결 문자 생략시 엔터로 간주
    //최대 입력 가능 문자수보다 많은 문자를 입려간 경우 n-1개 만큼 받아들이고 n번째 문자는 NULL로 바꾼다.
    while(cin.getline(str,101)){
        cout << str <<endl;
    }
    return 0;
}