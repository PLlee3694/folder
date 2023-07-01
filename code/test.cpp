#include<iostream>
using namespace std;

int main(){
    cout.fill('0');
    cout.width(3);

    int a = 1;
    int b = 2;

    cout << a << endl;	// 001
    cout << b << endl;	// 2

// 如果想要一直保持此格式，可在每一次输出前加一句 cout.width();
    for (int i = 0; i < 3; i++){
        cout.width(3);
        cout << i << endl;
    }
    // 000
    // 001
    // 002
}