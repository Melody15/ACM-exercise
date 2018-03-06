#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        int missNum;
        string str;
        cin >> missNum >> str;
        cout << i << ' ';
        for (int j = 0; j < str.size(); j++){
            if(j != missNum-1)
                cout << str[j];
        }
        cout << endl;
    }
    return 0;
}