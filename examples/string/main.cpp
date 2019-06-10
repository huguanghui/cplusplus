#include <iostream>
#include <string>

using namespace std;

// 定义string数组
string validTypeArray[] = {"txt", "md", "cpp"};

bool isValidFileType(string type) {
    int ret = false;

    // 轮询string数组
    for (string str : validTypeArray) {
        if (str == type) {
            ret = true;
            break;
        }
    }
    
    return ret;
}

int main(int argc, char const *argv[])
{
    bool bOk = isValidFileType("abc");
    cout << "OK?" << bOk << endl;

    // string和char[]的比较
    char tmp1[] = "abc";
    string tmp2 = "abc";
    if (tmp1 == tmp2) {
        cout << "OK" << endl;
    }
    if (tmp2.compare(tmp1)) {
        cout << tmp2 << " is not " << tmp1 << endl;
    } else {
        cout << tmp2 << " is " << tmp1 << endl;
    }

    return 0;
}
