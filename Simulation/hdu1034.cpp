#include <iostream>
using namespace std;

int maxNum(int *array, int n){
    int max = array[0];
    for(int i = 0; i < n ;i++){
        if(max < array[i])
            max = array[i];
    }
    return max;
}

int minNum(int *array, int n){
    int min = array[0];
    for(int i = 0; i < n ;i++){
        if(min > array[i])
            min = array[i];
    }
    return min;
}

int main(int argc, char const *argv[]){
    int whistleTime, maxCandyNum, minCandyNum, finalCandyNum;
    int studentNum;
    while(cin >> studentNum){
        if(studentNum == 0)
            break;
        int group[studentNum];
        whistleTime = 0;
        for(int i = 0; i < studentNum; i++)
            cin >> group[i];
        maxCandyNum = maxNum(group, studentNum);
        minCandyNum = minNum(group, studentNum);
        
        while(minCandyNum != maxCandyNum){ //Attention the hints!
            whistleTime++;
            int nextGive, lastReceive; //exchagne the candies
            for (int i = 0; i < studentNum; i++){
                if(i == 0)
                    lastReceive = group[studentNum-1]/2;
                nextGive = group[i]/2;
                group[i] -= nextGive;
                group[i] += lastReceive;
                lastReceive = nextGive;
                
                if(group[i] % 2 == 1)
                    group[i]++;
            }
            maxCandyNum = maxNum(group, studentNum);
            minCandyNum = minNum(group, studentNum);
        }
        cout << whistleTime << ' ' << maxCandyNum << endl;
    }
    return 0;
}
