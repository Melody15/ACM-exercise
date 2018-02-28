#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++){
        vector<char> data;
        char input;
        while(true){
            scanf("%c", &input);
            if(input == '\n')
                break;
            data.push_back(input);
        }
        int count_0 = 0;
        bool stop = false;
        if(data[0] == '-'){
            cout << '-';
            for (int j = data.size()-1; j > 0; j--){
                if(data[j] == '0' && stop == false)
                    count_0++;
                else{
                    cout << data[j];
                    stop = true;
                }
            }
            for (int j = 0; j < count_0; j++)
                cout << '0';
        }else{
            for (int j = data.size()-1; j >= 0; j--){
                if(data[j] == '0' && stop == false)
                    count_0++;
                else{
                    cout << data[j];
                    stop = true;
                }
            }
            for (int j = 0; j < count_0; j++)
                cout << '0';
        }
        cout << endl;
    }
    return 0;
}