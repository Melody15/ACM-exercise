#include <iostream>
#include <cstring>
using namespace std;

//网上看的思路自己实现了一遍ง(ˇﻌˇ)ง

char map[10][10];
int passed[10][10];

int main(int argc, char const *argv[]){
    int rows, columns, start;
    int steps, loopsteps, x, y;
    bool loop;
    //神奇的技巧
    while(cin >> rows >> columns >> start, rows || columns || start){
        memset(map, '\0', sizeof(map));  
        memset(passed, 0, sizeof(passed));  
        steps = 1;
        loopsteps = x = y = 0;
        for (int i = 0; i < rows; i++)
            cin >> map[i];
        
        y = start-1;
        while(true){
            passed[x][y] = steps;
            if(map[x][y] == 'W')
                y--;
            else if(map[x][y] == 'S')
                x++;
            else if(map[x][y] == 'E')
                y++;
            else if(map[x][y] == 'N')
                x--;
            steps++;
            
            if(x < 0 || y < 0 || x >= rows || y >= columns){ //out
                loop = false;
                break;
            }
            if(passed[x][y] != 0){ //loop
                loop = true;
                loopsteps = steps - passed[x][y];
                steps -= loopsteps;
                break;
            }
        }
        if(loop == false){
            cout << steps-1 << " step(s) to exit" << endl;
        }else
            cout << steps-1 << " step(s) before a loop of " << loopsteps << " step(s)" << endl;
    }
    return 0;
}
