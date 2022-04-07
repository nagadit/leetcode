#include<iostream>
using namespace std;

bool detectCapitalUse(string word) {
        int len_str = word.length();
        int num_capitals = 0;
        int first = 0;
        for (int i=0; i<len_str; i++){
        	if(i == 0){ first=1; }
            if (isupper(word[i])){
                num_capitals++;
            }
        }
        if (first == 1 && (num_capitals == len_str || num_capitals == 1) || num_capitals == 0){
            return true;
        }
        else{
            return false;
        }
    }


int main(){
	string input = "fffffffffffF";
	bool out = detectCapitalUse(input);
	cout << out;
	return 1;
}