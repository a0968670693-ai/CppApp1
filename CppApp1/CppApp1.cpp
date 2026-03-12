#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";
    string str3 = str1 + " " + str2 + "!";
    string str3a = "\"Hello \\ World!\"";
    auto str3b = R"("Hello \ world!")";

    // 輸出字串內容
    cout << "str3: " << str3 << endl;
    cout << "str3a: " << str3a << endl;
    cout << "str3b: " << str3b << endl;

    cout << endl; // 換行隔開

    cout << "str3 capacity = " << str3.capacity() << endl;
    cout << "str3 length(size) = " << str3.length() << endl;
    cout << "str3 max_size = " << str3.max_size() << endl;
    cout << "str3 size = " << str3.size() << endl;
    cout << "str3 empty = " << str3.empty() << endl; // 0 代表 false (不為空)

    // 字元存取
    cout << "str3[0] = " << str3[0] << endl;   // 取得第一個字元 'H'
    cout << "str3.at(4) = " << str3.at(4) << endl; // 取得索引 4 的字元 'o'
    cout << "str3.front() = " << str3.front() << endl; // 取得字串開頭 'H'

    return 0;
}