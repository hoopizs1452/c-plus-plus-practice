#include<iostream>
#include<string>
using namespace std;

int main()
{
    string number;
    cout << "請輸入一阿拉伯數字金額(最多16位) >> ";
    cin >> number;

    int size = number.size();
    for(int i=0; i<number.size(); i++)
    {
        if(number[i] == '9') cout << "玖";
        if(number[i] == '8') cout << "捌";
        if(number[i] == '7') cout << "柒";
        if(number[i] == '6') cout << "陸";
        if(number[i] == '5') cout << "伍";
        if(number[i] == '4') cout << "肆";
        if(number[i] == '3') cout << "參";
        if(number[i] == '2') cout << "貳";
        if(number[i] == '1') cout << "壹";
        if(number[i] == '0')
        {
            if(size % 4 == 3)
                if(number[i+1] != '0' || number[i+2] !='0') cout << "零";
            if(size % 4 == 2 && number[i-1] != '0')
                if(number[i+1] != '0') cout << "零";
        }
        if(size % 4 == 1)
        {
            if(size / 4 == 1)
                if(number[i] != '0' || number[i-1] != '0' || number[i-2] != '0' || number[i-3] != '0') cout << "萬";
            if(size / 4 == 2)
                if(number[i] != '0' || number[i-1] != '0' || number[i-2] != '0' || number[i-3] != '0') cout << "億";
            if(size / 4 == 3)
                if(number[i] != '0' || number[i-1] != '0' || number[i-2] != '0' || number[i-3] != '0') cout << "兆";
        }
        if(number[i] != '0')
        {
            if(size % 4 == 2) cout << "拾";
            if(size % 4 == 3) cout << "佰";
            if(size % 4 == 0) cout << "仟";
        }
        --size;
    }
    cout << "元整" << endl;
}