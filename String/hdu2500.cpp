#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        for (int j = 0; j < num*3; j++){
            for (int k = 0; k < num; k++)
                cout << "HDU";
            
            cout << endl;
        }
    }
    return 0;
}
