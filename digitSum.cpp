#include<iostream>
using namespace std;
int digitSum(int num){
    int res = 0;
    while(num > 0){
        res += num % 10;
        num /= 10;
    }
    return res;
}
int main()
{
    int n = 123;
    cout << digitSum(n);

    return 0;
}