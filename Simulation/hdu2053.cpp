#include <iostream>
using namespace std;
/*
计算switchNum的因数的个数即可。若因数个数为偶数则最后灯泡为熄灭状态，否则为亮起状态。
 */
int main(int argc, char const *argv[]){
    int switchNum, factorNum;
    while(cin >> switchNum){
        factorNum = 0;
        for (int i = 1; i <= switchNum; i++){
            if((switchNum % i) == 0)
                factorNum++;
        }
        if((factorNum % 2) == 0)
            cout << '0' << endl;
        else
            cout << '1' << endl;
    }
    return 0;
}