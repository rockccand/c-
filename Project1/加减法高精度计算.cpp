//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//// ʵ�ָ߾��ȼӷ�
////�� add �����У�����ʹ�� carry ��������¼��λ
////�� sub �����У�����ʹ�� borrow ��������¼��λ
////������ǻ���Ҫע��ȥ�����ǰ����������
//string add(string num1, string num2) {
//    string res = "";
//    int carry = 0;
//    // �������ַ�����ת����������ӵ�λ����λ��λ���
//    reverse(num1.begin(), num1.end());
//    reverse(num2.begin(), num2.end());
//    // �������ַ���������ȣ������λ�ò���
//    int len = max(num1.size(), num2.size());
//    num1.append(len - num1.size(), '0');
//    num2.append(len - num2.size(), '0');
//    // ��λ���
//    for (int i = 0; i < len; i++) {
//        int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
//        res.push_back(sum % 10 + '0');  // �ѵ�ǰλ�����ּ�������
//        carry = sum / 10;  // �����λ
//    }
//    // ������λ�н�λ������Ҫ�ѽ�λ��������
//    if (carry) {
//        res.push_back(carry + '0');
//    }
//    // ��ת�ַ����õ���ȷ�Ľ��
//    reverse(res.begin(), res.end());
//    return res;
//}
//
//// ʵ�ָ߾��ȼ�����num1 - num2������ num1 >= num2
//string sub(string num1, string num2) {
//    string res = "";
//    int borrow = 0;
//    // �������ַ�����ת����������ӵ�λ����λ��λ���
//    reverse(num1.begin(), num1.end());
//    reverse(num2.begin(), num2.end());
//    // �������ַ���������ȣ������λ�ò���
//    int len = max(num1.size(), num2.size());
//    num1.append(len - num1.size(), '0');
//    num2.append(len - num2.size(), '0');
//    // ��λ���
//    for (int i = 0; i < len; i++) {
//        int diff = (num1[i] - '0') - (num2[i] - '0') - borrow;
//        if (diff < 0) {  // �����Ҫ��λ
//            diff += 10;
//            borrow = 1;
//        }
//        else {
//            borrow = 0;
//        }
//        res.push_back(diff + '0');  // �ѵ�ǰλ�����ּ�������
//    }
//    // ȥ�����ǰ����
//    while (res.size() > 1 && res.back() == '0') {
//        res.pop_back();
//    }
//    // ��ת�ַ����õ���ȷ�Ľ��
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
