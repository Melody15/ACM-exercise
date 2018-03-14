#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]){
    string word;
    int length, i = 1;
    bool flag;
    while(cin >> word){
        if(word == "STOP")
            break;
        length = word.size(); 
        if(length == 1)
            flag = true;
        else if(length % 2 == 1){
            flag = true;
            for (int j = 0; j <= length/2; j++){
                if(word[j] != word[length-1-j]){
                    flag = false;
                    break;
                }
            }
        }else if(length % 2 == 0){
            flag = true;
            for (int j = 0; j < length/2; j++){
                if(word[j] != word[length-1-j]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag)
            cout << "#" << i << ": YES" << endl;
        else
            cout << "#" << i << ": NO" << endl;
        i++;
    }
    return 0;
}
