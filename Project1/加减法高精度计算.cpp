//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// 实现高精度加法
////在 add 函数中，我们使用 carry 变量来记录进位
////在 sub 函数中，我们使用 borrow 变量来记录借位
////最后，我们还需要注意去掉结果前导零的情况。
//string add(string num1, string num2) {
//    string res = "";
//    int carry = 0;
//    // 将两个字符串反转过来，方便从低位到高位逐位相加
//    reverse(num1.begin(), num1.end());
//    reverse(num2.begin(), num2.end());
//    // 让两个字符串长度相等，不足的位置补零
//    int len = max(num1.size(), num2.size());
//    num1.append(len - num1.size(), '0');
//    num2.append(len - num2.size(), '0');
//    // 逐位相加
//    for (int i = 0; i < len; i++) {
//        int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
//        res.push_back(sum % 10 + '0');  // 把当前位的数字加入结果中
//        carry = sum / 10;  // 计算进位
//    }
//    // 如果最高位有进位，则需要把进位加入结果中
//    if (carry) {
//        res.push_back(carry + '0');
//    }
//    // 反转字符串得到正确的结果
//    reverse(res.begin(), res.end());
//    return res;
//}
//
//// 实现高精度减法，num1 - num2，假设 num1 >= num2
//string sub(string num1, string num2) {
//    string res = "";
//    int borrow = 0;
//    // 将两个字符串反转过来，方便从低位到高位逐位相减
//    reverse(num1.begin(), num1.end());
//    reverse(num2.begin(), num2.end());
//    // 让两个字符串长度相等，不足的位置补零
//    int len = max(num1.size(), num2.size());
//    num1.append(len - num1.size(), '0');
//    num2.append(len - num2.size(), '0');
//    // 逐位相减
//    for (int i = 0; i < len; i++) {
//        int diff = (num1[i] - '0') - (num2[i] - '0') - borrow;
//        if (diff < 0) {  // 如果需要借位
//            diff += 10;
//            borrow = 1;
//        }
//        else {
//            borrow = 0;
//        }
//        res.push_back(diff + '0');  // 把当前位的数字加入结果中
//    }
//    // 去掉结果前导零
//    while (res.size() > 1 && res.back() == '0') {
//        res.pop_back();
//    }
//    // 反转字符串得到正确的结果
//    reverse(res.begin(), res.end());
//    return res;
//}
//
//int main() {
//    string num1 = "123456789012345678901234567890";
//    string num2 = "987654321098765432109876543210";
//    string sum = add(num1, num2);
//    string diff = sub(num1, num2);
//    cout << "num1 + num2 = " << sum << endl;
//    cout << "num1 - num2 = " << diff << endl;
//    return 0;
//}
