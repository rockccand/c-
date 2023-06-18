//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int a, b, c;
//    cout << "请输入3块石头的重量：" << endl;
//    cin >> a >> b >> c;
//
//    int d = 30 - a - b - c;
//
//    cout << "第四块石头的质量为 " << d << " 千克" << endl;
//
//    return 0;
//}

// 对程序如果石头重量超过30的一个提示优化
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "请输入3块石头的重量：" << endl;
    cin >> a >> b >> c;

    int d = 30 - a - b - c;

    if (d < 0) {
        cout << "输入的三块石头重量之和已经超过了30千克，请重新输入" << endl;
        return 1;   // 返回1表示程序异常结束
    }

    cout << "第四块石头的质量为 " << d << " 千克" << endl;

    return 0;
}
