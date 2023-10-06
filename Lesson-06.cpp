#include <iostream>

using namespace std;

int multip(int a)
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
int main()
{
    // int a;
    // cin >> a;
    // switch (a)
    // {
    // case 0:
    //     cout << "Monday";
    //     break;
    // case 1:
    //     cout << "Tuesday";
    //     break;
    // case 2:
    //     cout << "Wednesday";
    //     break;
    // case 3:
    //     cout << "Thursday";
    //     break;
    // case 4:
    //     cout << "Friday";
    //     break;
    // case 5:
    //     cout << "Saturday";
    //     break;
    // case 6:
    //     cout << "Sunday";
    //     break;
    // default:
    //     cout << "Error!!!";
    // }

    // Su khac nhau giua 3 vong lap
    // int n = 0;
    // int i = 0;

    // while (i < n)
    // {
    //     cout << "PAK";
    //     i++;
    // };

    // for(; i < n; i++){
    //     cout << "PAK";

    // }

    // do
    // {
    //     cout << "PAK";
    //     i++;
    // } while (i < n);

    // for(; i <= n; i++){
    //     if(i == 3 ){
    //         continue;
    //         cout << "break";
    //     }
    //     cout << i;
    // }

    //    for (int i = 2; i < 9; i++)
    // {
    //     cout << "aaa";
    // }
    // n = 10;

    // cout << !n;
    // cout << endl;
    // int i = 1;
    // int j = 2;
    // // while(mc <= 10){
    // //     result = n * mc;
    // //     cout << n << " x " << mc << " = " << result << endl;
    // //     mc++;
    // // }
    // for (; j <= 10; j)
    // {
    //     multip(j);
    //     j++;
    // }

    // kiem tra tat ca uoc so
    // int n = 10; // 1 2 5 10

    // int sumOfGCD = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         sumOfGCD += i;
    //     }
    // }
    // cout << sumOfGCD;
    // int n = 234;
    // int mul = 1;
    // while (n != 0)
    // {
    //     mul *= n % 10;
    //     n /= 10;
    // }
    // cout << mul;
    int n = 345;
    int fisrtDigit = 0;
       while (n / 10 != 0)
    {
        fisrtDigit = n / 10;
        n /= 10;
    }
    cout << fisrtDigit;

    system("pause");

    return 0;
}