[TOC]

# 标准库中string的使用

## std::string的使用

> 原型是std::basic_string<char>

### demo

```c++
// 定义string数组
string validTypeArray[] = {"txt", "md", "cpp"};
// 轮询string数组
for (string str : validTypeArray) {
    if (str == type) {
        ret = true;
        break;
    }
}
// string和char[]的比较
char tmp1[] = "abc";
string tmp2 = "abc";
if (tmp1 == tmp2) {
    cout << "OK" << endl;
}
```

