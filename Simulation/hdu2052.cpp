#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int width, height;
    while(scanf("%d %d", &width, &height) != EOF){  //Attention!
        for (int i = 0; i < height+2; i++){
            if(i == 0 || i == height+1){
                cout << '+';
                for (int j = 0; j < width; j++)
                    cout << '-';
                cout << '+' << endl;
            }else{
                cout << '|';
                for (int j = 0; j < width; j++)
                    cout << ' ';
                cout << '|' << endl;
            }
        }
        cout << endl;  //Attention!
    }
    return 0;
}