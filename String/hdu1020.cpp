#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string input;
        cin >> input;
        int count = 1;
        char lastChar, currentChar;
        lastChar = input[0];
        for (int i = 1; i < input.size(); i++){
            currentChar = input[i];
            if(currentChar == lastChar)
                count++;
            else{
                if(count == 1)
                    cout << lastChar;
                else
                    cout << count << lastChar;
                count = 1;
            }
            lastChar = currentChar;
        }
        if(count == 1)
            cout << lastChar;
        else
            cout << count << lastChar;
        cout << endl;
    }
    return 0;
}