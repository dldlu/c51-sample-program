/*
题目描述
相传韩信才智过人，从不直接清点自己军队的人数，
只要让士兵先后以三人一排、五人一排、七人一排地变换队形，
而他每次只掠一眼队伍的排尾就知道总人数了。输入3个非负整数a,b,c ，
表示每种队形排尾的人数（a<3,b<5,c<7），输出总人数的最小值（或报告无解）。
已知总人数不小于10，不超过100 。

输入
输入3个非负整数a,b,c ，表示每种队形排尾的人数（a<3,b<5,c<7）。例如,输入：2 4 5

输出
输出总人数的最小值（或报告无解，即输出No answer）。实例，输出：89

样例输入
2 1 6

 样例输出
41 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    int i;
    int t = 0;

    cin>>a>>b>>c;
    for(i = 10; i <= 100; i++)
    {
        if(i % 3 == a && i % 5 == b && i % 7 == c)
        {
            t++;
            break;
        }
    }
    if(t == 1)
    cout << i << endl;
    else
    cout << "No answer";
    return 0;
}
