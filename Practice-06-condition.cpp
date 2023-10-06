#include <iostream>
#include <math.h>

using namespace std;

// Tim so chan
int checkEvenNum(int a)
{
    (a % 2 == 0) ? cout << a << " Yes" << endl : cout << a << " No" << endl;
    return a;
}

// Tim so chinh phuong
int checkSquareNum(int a)
{
    int squareA = sqrt(a);
    (squareA * squareA == a) ? cout << a << " Yes" << endl : cout << a << " No" << endl;
    return 0;
}

// Tim so lon nhat
int findMax(float a, float b, float c)
{
    float max = a;
    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    cout << max << " la so lon nhat" << endl;
    return 0;
}

// Tinh toan theo yeu cau
int calculateAsRequire(int a, int b, char s)
{
    if (s == 43)
    {
        cout << "a + b = " << a + b << endl;
    }
    else if (s == 45)
    {
        cout << "a - b = " << a - b << endl;
    }
    else if (s == 120)
    {
        cout << "a x b = " << a * b << endl;
    }
    else if (s == 58)
    {
        cout << "a : b = " << (float)a / b << endl;
    }
    else
    {
        cout << "Your symbol is wrong!!! " << endl;
    }
    return 0;
}

// Tinh PT Bac I
int equationOfTheFirstDegree(float a, float b)
{
    if (a == 0 && b == 0)
    {
        cout << "VN" << endl;
    }
    else if (a == 0 && b != 0)
    {
        cout << "VSN" << endl;
    }
    else
    {
        cout << "Nghiem cua phuong trinh la: x = " << round(-b / a * 100) / 100 << endl;
    }
    return 0;
}

// Tinh so ngay cua thang trong nam khong nhuan
int dateOfMonthInNoProfitYear(int month)
{
    switch (month)
    {
    case 1:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;
    case 2:
        cout << "Thang " << month << " co 28 ngay" << endl;
        break;
    case 3:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;
    case 4:
        cout << "Thang " << month << " co 30 ngay" << endl;
        break;
    case 5:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;
    case 6:
        cout << "Thang " << month << " co 30 ngay" << endl;
        break;
    case 7:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;
    case 8:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;
    case 9:
        cout << "Thang " << month << " co 30 ngay" << endl;
        break;
    case 10:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;
    case 11:
        cout << "Thang " << month << " co 30 ngay" << endl;
        break;
    case 12:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;

    default:
        cout << "A year has only 12 months" << endl;
    }
    return 0;
}

// Kiem tra nam nhuan
int checkYear(int year)
{
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// Tinh nam nhuan hay khong nhuan va so ngay cua thang do
int dateOfMonth(int year, int month)
{

    switch (month)
    {
    case 1:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;
    case 2:
        if (checkYear(year) == true)
        {
            cout << "Nam " << year << " la nam nhuan!" << endl;
            cout << "Thang " << month << " co 29 ngay" << endl;
        }
        else
        {
            cout << "Nam " << year << " la nam khong nhuan!" << endl;
            cout << "Thang " << month << " co 28 ngay" << endl;
        }
        break;
    case 3:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;
    case 4:
        cout << "Thang " << month << " co 30 ngay" << endl;
        break;
    case 5:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;
    case 6:
        cout << "Thang " << month << " co 30 ngay" << endl;
        break;
    case 7:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;
    case 8:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;
    case 9:
        cout << "Thang " << month << " co 30 ngay" << endl;
        break;
    case 10:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;
    case 11:
        cout << "Thang " << month << " co 30 ngay" << endl;
        break;
    case 12:
        cout << "Thang " << month << " co 31 ngay" << endl;
        break;

    default:
        cout << "A year has only 12 months" << endl;
    }
    return 0;
}

// Tinh tong cac chu so cua mot so
int sumOfDigitNum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
// Tinh tong ad + bc cua mot so co 4 chu so
int sumEachPairOfNums(int num)
{
    int p1 = num / 100;
    int p2 = num % 100;
    cout << "Ket qua ad + bc = " << sumOfDigitNum(p1) * 10 + sumOfDigitNum(p2) << endl;
    return 0;
}

// Kiem tra gio phut giay
int plusOneSecond(int h, int m, float s)
{
    s += 1;
    if (s == 60)
    {
        m += 1;
        s = 0;
        if (m == 60)
        {
            h += 1;
            m = 0;
            if (h > 24)
            {
                h = 1;
                cout << h << " : " << m << " : " << s << "s" << endl;
            }
            else
            {
                cout << h << " : " << m << " : " << s << "s" << endl;
            }
        }
        else
        {
            cout << h << " : " << m << " : " << s << "s" << endl;
        }
    }
    else
    {
        cout << h << " : " << m << " : " << s << "s" << endl;
    }
    return 0;
}
int checkHours(int h, int m, float s)
{
    if (h <= 24 && h >= 1)
    {
        if (m <= 59 && m >= 0)
        {
            if (s <= 59 && s >= 0)
            {
                cout << "YES!!!" << endl;
                plusOneSecond(h, m, s);
            }
            else
            {
                cout << "NO!!!" << endl;
            }
        }
        else
        {
            cout << "NO!!!" << endl;
        }
    }
    else
    {
        cout << "NO!!!" << endl;
    }

    return 0;
}
int main()
{
    int a;          // 1, 2
    float b, c, d;  // 3
    int num1, num2; // 4
    char symbol;    // 4
    float n1, n2;   // 5
    int month;      // 6, 7
    int year;       // 7
    int num;        // 8
    int h, m;       // 9
    float s;        // 9

    // 1, 2
    cout << "Nhap vao so nguyen a de kiem tra (1, 2): ";
    cin >> a;
    cout << endl;
    // 3
    cout << "Nhap vao 3 so bat ki de kiem tra (3): ";
    cin >> b;
    cin >> c;
    cin >> d;
    // 4
    cout << "Nhap vao 2 nguyen so va mot phep toan (+; -; x; :) de kiem tra (4): ";
    cin >> num1;
    cin >> num2;
    cin >> symbol;
    // 5
    cout << "Nhap vao 2 so a, b de tinh nghiem phuong trinh 'ax + b = 0' (5): ";
    cin >> n1;
    cin >> n2;
    // 6
    cout << "Nhap vao thang bat ki trong nam (khong nhuan) (6): ";
    cin >> month;
    // 7
    cout << "Nhap vao nam va thang bat ki (7): ";
    cin >> year;
    cin >> month;
    // 8
    cout << "Nhap vao mot so co 4 chu so (abcd) (8): ";
    cin >> num;
    // 9
    cout << "Nhap vao lan luot gio, phut, giay (9): ";
    cin >> h;
    cin >> m;
    cin >> s;

    checkEvenNum(a);
    cout << "==================================================" << endl;
    checkSquareNum(a);
    cout << "==================================================" << endl;
    findMax(b, c, d);
    cout << "==================================================" << endl;
    calculateAsRequire(num1, num2, symbol);
    cout << "==================================================" << endl;
    equationOfTheFirstDegree(n1, n2);
    cout << "==================================================" << endl;
    dateOfMonthInNoProfitYear(month);
    cout << "==================================================" << endl;
    dateOfMonth(year, month);
    cout << "==================================================" << endl;
    sumEachPairOfNums(num);
    cout << "==================================================" << endl;
    checkHours(h, m, s);
    cout << "========================END=======================" << endl;
    system("pause");
    return 0;
}