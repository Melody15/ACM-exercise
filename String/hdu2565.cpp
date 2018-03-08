#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        for (int j = 1; j <= num; j++){
            for (int k = 1; k <= num; k++){
                if(k == j || k == num+1-j){
                    cout << 'X';
                    if((k == j && k >= num+1-j) || (k == num+1-j && k >= j))
                        break;
                }
                else
                    cout << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}