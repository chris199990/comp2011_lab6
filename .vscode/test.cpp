#include <iostream>

using namespace std;

void add10(int &x)    // ← 這裡的 x 是正式參數
{
    x = x + 10;      // 只改到函數內部的「複製品」
    printf("函數裡 x = %d\n", x);  // 會印 20
}

int main()
{
    int a = 10;
    add10(a);        // a 是實際參數，會被「複製」一份給 x
    printf("外面 a = %d\n", a);    // 還是 10！沒變！
}