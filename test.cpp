
#include <iostream> //支持万能头
using namespace std;
int main()
{
    int a, b;
    a = 100;
    b = 200;

    cout << "请输入一个数字:";
    cin >> a;
    cout << a << endl
         << b << endl;
    system("pause"); // 使用弹出窗口时，要加上此行命令，防止闪退。

    return 0;
}
