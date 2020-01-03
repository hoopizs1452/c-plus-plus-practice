#include<iostream>
using namespace std;

int main()
{
    int year, month, day;
    int check;
    cout << "照順序輸入年 月 日:";
    cin >> year >> month >> day;
    cout << year << "/" << month << "/" << day << " ";
    
    check = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 1 : 0;

    int date = day;
    switch (month)
    {
    case 12:
        date += 30;
    case 11:
        date += 31;
    case 10:
        date += 30;
    case 9:
        date += 31;
    case 8:
        date += 31;
    case 7:
        date += 30;
    case 6:
        date += 31;
    case 5:
        date += 30;
    case 4:
        date += 31;
    case 3:
        date += 28;
    case 2:
        date += 31;
    }
    if(check == 1 && month >= 3)
        ++date;

    cout << "是" << year << "年的第" << date << "天" << endl;
}