#include <iostream>
#include "vector"
void print(int arr[][5]){
    for(int i=0;i<5;++i){
        for (int k=0;k<5;++k)
            std::cout<<arr[i][k]<<" ";
        std::cout<<std::endl;
    }
}

int main() {
    int arr[5][5];
    for(int i=0;i<25;++i){
        arr[i/5][((i/5+1)%2*i+(i/5%2)*(24-i))%5]=i;
    }
    print(arr);
    return 0;
}
