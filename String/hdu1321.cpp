#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++){
        string sentence;
        getline(cin, sentence);
        for (int j = sentence.size()-1; j >= 0; j--)
            cout << sentence[j];
        cout << endl;
    }
    return 0;
}