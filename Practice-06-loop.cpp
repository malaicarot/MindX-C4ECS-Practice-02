#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// Kiem tra so nguyen to, SNT la so chi chia het cho 1 va chinh no
int checkPrimeNum(int A)
{
    int result = 0;
    // Cach I
    //  if (A < 2)
    //  {
    //      cout << A << " is not prime!";
    //  }
    //  else
    //  {
    //      for (int i = 1; i <= A; i++)
    //      {
    //          if (A % i == 0)
    //          {
    //              result++;
    //          }
    //      }
    //      if (result == 2)
    //      {
    //          cout << A << " is prime!";
    //      }
    //      else
    //      {
    //          cout << A << " is not prime!";
    //      }
    //  }

    // Cach II: Su dung can bac hai de tim uoc so cua A
    if (A < 2)
    {
        cout << A << " is not prime!";
    }
    for (int i = 2; i <= sqrt(A); i++) // i phai chay <= vi neu de < thi vong se khong chay (i = 2; i < 2)(vo nghia)
    {
        if (A % i == 0)
        {
            result++;
        }
    }
    if (result == 0)
    {
        cout << A << " is prime!";
    }
    else
    {
        cout << A << " is not prime!";
    }
    cout << endl;
    return result;
}

// Kiem tra cac so chan trong khoang (M, N)
int checkEvenFromNumsSequence(int M, int N)
{
    for (int i = M; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

// Kiem tra so hoan hao (la tong cac uoc that su bang chinh no)
int checkPerfectNum(int n)
{
    int result = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            result += i;
        }
    }
    if (result == n)
    {
        cout << n << " is perfect number!!!";
    }
    else
    {
        cout << n << " is not perfect number!!!";
    }
    cout << endl;
    return result;
}

// Tim UCLN va BCNN cua 2 so (UCLN(a, b) = (a*b) / BCNN(a, b))
int findGCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}
int findLCM(int a, int b)
{
    return (a * b) / findGCD(a, b);
}

// Tinh giai thua
int Calfactorial(int n)
{
    int result = 1;
    if (n >= 0)
    {
        for (int i = 1; i <= n; i++)
        {
            result *= i;
        }
        cout << n << "! is: " << result;
    }
    else
    {
        cout << "Negative numbers do not exist int factorials";
    }
    cout << endl;
    return 0;
}

// In bang cuu chuong cua n
int multiplicationTableOfInteger(int n)
{
    int result = 0;
    for (int i = 1; i <= 10; i++)
    {
        result = n * i;
        cout << n << " x " << i << " = " << result << endl;
    }
    return 0;
}

// In bang cuu chuong tu 2 -> 10
int multiplicand(int a)
{
    int result = 0;
    for (int i = 1; i <= 10; i++)
    {
        result = a * i;
        cout << a << " x " << i << " = " << result << endl;
    }
    cout << "========================" << endl;
    return 0;
}
int multiplicationTable()
{
    for (int i = 2; i <= 10; i)
    {
        multiplicand(i);
        i++;
    }
    return 0;
}

// Tinh ket qua theo cong thuc
int resultBasedOnFormula(int n)
{
    float result = 1.0;
    for (float i = 2; i <= n; i++)
    {
        result += pow(1 / i, 3);
    }
    cout << setprecision(3) << fixed << result << endl;
    return result;
}

// Kiem tra xem Tich cac chu so cua a co bang tong uoc so cua b hay khong
int checkAllSubmultiple(int n) // kiem tra tat ca uoc so
{
    int sumOfGCD = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sumOfGCD += i;
        }
    }
    return sumOfGCD;
}
int result(int n, int m)
{
    int mul = 1;
    if (n > m)
    {
        while (n != 0)
        {
            mul *= n % 10;
            n /= 10;
        }
        if (mul == checkAllSubmultiple(m))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "Value is wrong, N > M";
    }
    cout << endl;
    return 0;
}

// Nhap vao 3 so nguyen M, N, K, kiem tra xem tong cac chu so cua M + chu so dau tien cua N co bang K hay khong?
int checkSum(int a, int b, int c)
{
    int sumFirstNum = 0;
    // Tinh tong cac chu so cua so dau tien
    while (a != 0)
    {
        sumFirstNum += a % 10;
        a /= 10;
    }
    // lay chu so dau tien cua chu so thu 2
    int fisrtDigit = 0;
    while (b / 10 != 0) // neu b / 10 == 0 thi co nghia la 1 chu so
    {
        fisrtDigit = b / 10;
        b /= 10;
    }
    // so sang tong cac chu so cua a + chu so dau tien cua b voi c
    if (sumFirstNum + fisrtDigit == c)
    {
        cout << "YES!!!";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
    return 0;
}
int main()
{
    // so nguyen to;
    int A;
    // in tat ca cac so chan trong khoang (M, N);
    int M, N;
    // so hoan hao
    int pNum;
    // UCLN, BCNN
    int n1, n2;
    // tinh giai thua
    int n;
    // tinh bang cuu chuong cua so nhap vao
    int m;
    // in bang cuu chuong tu 2 toi 10

    // tinh ket qua theo cong thuc (1 + 1/2^3 + 1/3^3 +...1/n^3)
    int x;

    // kiem tra xem Tich cac chu so cua a co bang tong uoc so cua b hay khong
    int y, z;
    //
    int t, r, s;

    // 1
    cout << "Please enter any integer to check prime num: ";
    cin >> A;
    // 2
    cout << "Please enter numbers sequence start from M and end at N: ";
    cin >> M;
    cin >> N;
    // 3
    cout << "Please enter integer to check perfect num: ";
    cin >> pNum;
    // 4
    cout << "Please enter two integer to find GCD and LCM: ";
    cin >> n1;
    cin >> n2;
    // 5
    cout << "Please enter integer to cal factorial: ";
    cin >> n;
    // 6
    cout << "Please enter integer to cal multiplication tables of it: ";
    cin >> m;
    // 8
    cout << "Please enter integer to cal based on formula: ";
    cin >> x;
    // 9
    cout << "Please enter two integer (N > M) : ";
    cin >> y;
    cin >> z;
    // 10
    cout << "Please enter three integer (N > M) : ";
    cin >> t;
    cin >> r;
    cin >> s;

    cout << "==================================================" << endl;
    // 1
    checkPrimeNum(A);
    cout << "==================================================" << endl;
    // 2
    checkEvenFromNumsSequence(M, N);
    cout << "==================================================" << endl;
    // 3
       checkPerfectNum(pNum);
    cout << "==================================================" << endl;
    // 4
    cout << "GCD is " << findGCD(n1, n2)<< endl;
    cout << "LCM is " << findLCM(n1, n2)<< endl;
    cout << "==================================================" << endl;
    // 5
    Calfactorial(n);
    cout << "==================================================" << endl;
    // 6
    multiplicationTableOfInteger(m);
    cout << "==================================================" << endl;
    // 7
    cout << "Multiplication table: " << endl;
    multiplicationTable();
    cout << "==================================================" << endl;
    // 8
    resultBasedOnFormula(x);
    cout << "==================================================" << endl;
    // 9
    result(y, z);
    cout << "==================================================" << endl;
    // 10
    checkSum(t, r, s);
    cout << "========================END=======================" << endl;
    system("pause");
    return 0;
}