#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> countBits(int num){
        vector<int> res;
        for(int i = 0; i <= num; ++i){
            int tmp = i;
            int cnt = 0;
            while(tmp){
                cnt += (tmp % 2);
                tmp = tmp / 2;
            }
            res.push_back(cnt);
            
        }
        for(int j = 0; j <=num; ++j){
            cout << res[j];
        }
        return res;
    }
};

int main(int argc, char *argv[]){
    int num;
    Solution s;
    cout << "start!" << endl;
    cin >> num;
    cout << num << endl;
    s.countBits(num);
    return 0;
    
}
