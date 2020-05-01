//aaaaaaa
#include <iostream>

int main(){
    int a [10];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < 10; ++i){
        a[i] = a[i - 2] + a[i - 1];
    }
    return 0;
    }

    