#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int times, totalTime;
    int presentFloor, nextFloor;
    while(cin >> times){
        totalTime = 0;
        presentFloor = 0;
        if(times != 0){
            for (int i = 0; i < times; i++){
                cin >> nextFloor;
                if(presentFloor < nextFloor)
                    totalTime += (nextFloor-presentFloor)*6+5;
                else
                    totalTime += (presentFloor-nextFloor)*4+5;
                presentFloor = nextFloor;
            }
            cout << totalTime << endl;;
        }else if(times == 0)
            break;
    }
    return 0;
}