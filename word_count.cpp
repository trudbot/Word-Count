#include <bits/stdc++.h>
using namespace std;

// ͳ���ļ��е��ַ�����
int count_chars(string filename) {
    int char_count = 0;
    char ch;
    ifstream fin(filename); // ���ļ�
    if (!fin.is_open()) { // �ж��ļ��Ƿ�򿪳ɹ�
        cout << "Error opening file!" << endl;
        return -1; // ��ʧ�ܣ�����-1
    }
    while (fin.get(ch)) { // ��ȡ�ļ��е�ÿ���ַ�
        char_count++; // ��������1
    }
    fin.close(); // �ر��ļ�
    return char_count; // �����ַ�����
}

// ͳ���ļ��еĵ��ʸ���
int count_words(string filename) {
    int word_count = 0;
    char ch;
    ifstream fin(filename); // ���ļ�
    if (!fin.is_open()) { // �ж��ļ��Ƿ�򿪳ɹ�
        cout << "Error opening file!" << endl;
        return -1; // ��ʧ�ܣ�����-1
    }
    while (fin.get(ch)) { // ��ȡ�ļ��е�ÿ���ַ�
        if (ch == ' ' || ch == ',') { // ��������ո�򶺺�
            word_count++; // ���ʼ�������1
        }
    }
    word_count++; // �������һ������
    fin.close(); // �ر��ļ�
    return word_count; // ���ص��ʸ���
}

int main(int argc, char* args[]) {
    if (argc != 3) { // �жϲ��������Ƿ���ȷ
        cout << "��������!" << endl;
    } else {
        if (strcmp(args[1], "-c") == 0) { // ͳ���ַ�����
            cout << "�ַ�����: " << count_chars(args[2]) << endl;
        } else if (strcmp(args[1], "-w") == 0) { // ͳ�Ƶ��ʸ���
            cout << "���ʸ���: " << count_words(args[2]) << endl;
        } else {
            cout << "��������!" << endl;
        } 
    }
    return 0;
} 

