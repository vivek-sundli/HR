#include <bits/stdc++.h>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    //int arr[99999]={};
    map<int, int> sockFreq;//(0,0);
    int count=0;
    for(int i:ar){
        sockFreq[i]++;
    }
    for(auto it:sockFreq){
        if(it.second>1){
            count+=it.second/2;
        }
    }
    return count;
}

int main() {
	//vector<vector<int>> arr={{11,2,4},{4,5,6},{10,8,-12}};
	vector<int> ar = {10,20,20,10,10,30,50,10,20};
	cout<<sockMerchant(9,ar);
	
	return 0;
}
