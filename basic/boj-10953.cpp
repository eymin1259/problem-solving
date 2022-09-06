#include <iostream>
#include <string>
using namespace std;

int main() {
    int num =0;
    cin >> num;
    for(int a=0;a<num; a++){
        string str;
        cin >> str;
        str.push_back('\n');
        int i=0;
        int n1=0;
        int n2=0;
        while(str[i] != ','){
            n1 = (n1*10) + ((int)str[i]-48); 
            i++;
        }
        i++;
        while(str[i] != '\n'){
            n2 = (n2*10) + ((int)str[i]-48);
            i++;
        }
          cout << n1+n2 <<endl;
    }
    return 0;
}