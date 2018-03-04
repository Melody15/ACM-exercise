#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    double e = 0;
    printf("n e\n");
    printf("- -----------\n");
    for (int i = 0; i < 10; i++){
        int temp = 1;
        if(i != 0){
            for (int j = i; j > 0; j--)
                temp *= j;
        }
        e += (double)1/temp;
        if(i == 0)
            printf("0 1\n");
        else if(i == 1)
            printf("1 2\n");
        else if(i == 2)
            printf("2 2.5\n");
        else
            printf("%d %.9f\n", i, e);
    }
    return 0;
}
