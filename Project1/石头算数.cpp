//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int a, b, c;
//    cout << "������3��ʯͷ��������" << endl;
//    cin >> a >> b >> c;
//
//    int d = 30 - a - b - c;
//
//    cout << "���Ŀ�ʯͷ������Ϊ " << d << " ǧ��" << endl;
//
//    return 0;
//}

// �Գ������ʯͷ��������30��һ����ʾ�Ż�
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "������3��ʯͷ��������" << endl;
    cin >> a >> b >> c;

    int d = 30 - a - b - c;

    if (d < 0) {
        cout << "���������ʯͷ����֮���Ѿ�������30ǧ�ˣ�����������" << endl;
        return 1;   // ����1��ʾ�����쳣����
    }

    cout << "���Ŀ�ʯͷ������Ϊ " << d << " ǧ��" << endl;

    return 0;
}
