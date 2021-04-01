#include <iostream>
using namespace std;
void check(int a[])
{
    for (int i = 0;i < 10;i++) cout << &a[i];
}
int main()
{
    int a[10]
    for (int i = 0;i < 10;i++) cout << &a[i];
    cout << endl;
    check(a);
    return 0;
}