#include<iostream>
using namespace std;

int myAtoi(string s) {
    int out = 0;
    bool neg = false;
    int len = s.size();
    int num_digits = 0;
    int unon = 0;
    int zeros = 0;
    for(int i = 0; i <= len; i++) {
        if(s[i] == '-'){
            if(unon > 0 or num_digits > 0 or zeros > 0){break;}
            unon +=1;
            neg = true;
            continue;
        }
        if(s[i] == '+'){
            if(unon > 0 or num_digits > 0 or zeros > 0){break;}
            unon+=1;
            neg = false;
            continue;
        }
        if (s[i] == ' ' and unon  == 0){
            continue;
        }
        if (isdigit(s[i])) {
            if(s[i] == '0'){zeros+=1;}
            else{num_digits+=1;}
            if (num_digits > 10){
                out =  INT_MAX;
                break;
            }
            out = out * 10 + ((int) s[i] - 48);
            continue;
        }
        break;

    }
    if(neg){ out*=-1;  if(out == INT_MIN + 1){out -= 1;}}

    return out;

}

int main(){
    string input = "fffffffffffF";
    int out = myAtoi(input);
    cout << out;
    return 1;
}