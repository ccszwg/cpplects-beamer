// 例 03-38-02 : ex03-38-02-01.cpp
#include <iostream>
using namespace std;
class FuncTable
{
    void f(int) const {cout << "FuncTable::f()\n";}
    void g(int) const {cout << "FuncTable::g()\n";}
    void h(int) const {cout << "FuncTable::h()\n";}
    void i(int) const {cout << "FuncTable::i()\n";}
    static const int cnt = 4;
    void (FuncTable::*fptr[cnt])(int) const; // 函数表
public:
    FuncTable(){  // 初始化函数表
        fptr[0] = &FuncTable::f;
        fptr[1] = &FuncTable::g;
        fptr[2] = &FuncTable::h;
        fptr[3] = &FuncTable::i;
    }

