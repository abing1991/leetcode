#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> countBits(int num){
        vector<int> res;
        if(num == 0){
            res.push_back(0);
            return res;
        }
        res.push_back(0);
        res.push_back(1);
        int com = 1;
        num -= 1;
        while(com * 2 <= num){
            com *= 2;
            for(int i = 0; i < com; ++i){
                res.push_back(res[i] + 1);
            }
            num -= com;
        }
        for(int i = 0; i < num; ++i){
            res.push_back(res[i] + 1);
        }
        for(int i = 0; i < res.size(); ++i){
            cout << res[i];
        }
        cout << endl;
        return res;
    }

};

int main(int argc, char *argv[]){
    int num;
    cin >> num;
    Solution s;
    s.countBits(num);
    return 0;
}

