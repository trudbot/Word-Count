#include <bits/stdc++.h>
using namespace std;

// 统计文件中的字符个数
int count_chars(string filename) {
    int char_count = 0;
    char ch;
    ifstream fin(filename); // 打开文件
    if (!fin.is_open()) { // 判断文件是否打开成功
        cout << "Error opening file!" << endl;
        return -1; // 打开失败，返回-1
    }
    while (fin.get(ch)) { // 读取文件中的每个字符
        char_count++; // 计数器加1
    }
    fin.close(); // 关闭文件
    return char_count; // 返回字符个数
}

// 统计文件中的单词个数
int count_words(string filename) {
    int word_count = 0;
    char ch;
    ifstream fin(filename); // 打开文件
    if (!fin.is_open()) { // 判断文件是否打开成功
        cout << "Error opening file!" << endl;
        return -1; // 打开失败，返回-1
    }
    while (fin.get(ch)) { // 读取文件中的每个字符
        if (ch == ' ' || ch == ',') { // 如果遇到空格或逗号
            word_count++; // 单词计数器加1
        }
    }
    word_count++; // 加上最后一个单词
    fin.close(); // 关闭文件
    return word_count; // 返回单词个数
}

int main(int argc, char* args[]) {
    if (argc != 3) { // 判断参数数量是否正确
        cout << "参数错误!" << endl;
    } else {
        if (strcmp(args[1], "-c") == 0) { // 统计字符个数
            cout << "字符个数: " << count_chars(args[2]) << endl;
        } else if (strcmp(args[1], "-w") == 0) { // 统计单词个数
            cout << "单词个数: " << count_words(args[2]) << endl;
        } else {
            cout << "参数错误!" << endl;
        } 
    }
    return 0;
} 

