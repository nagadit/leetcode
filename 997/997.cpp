#include<iostream>
#include <vector>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>trustScore(n+1,0);
        for(auto person:trust){
            trustScore[person[0]]--;
            trustScore[person[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(trustScore[i]==n-1){
                return i;
            }
        }
        return -1;
    }

int main(){
	int n = 3;
	vector<vector<int>> trust = {{1,3},{2,3},{3,1}};
    cout << findJudge(n, trust) << endl;
    return 1;
}