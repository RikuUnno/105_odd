#include <iostream>

using namespace std;

int main()
{
    int oddN = 0;
    int divisorsCount = 0;
    int count = 0;

    for (int j = 1; j <= 200; j += 2)
    {
        oddN = j;
        divisorsCount = 0;
        for (int i = 1; i <= oddN; i++)
        {
            if (oddN % i == 0)
            {
                divisorsCount++;
                cout << oddN << "の約数：" << i << endl;
            }
        }

        cout << oddN << "の約数は" << divisorsCount << "個" << endl;

        if (divisorsCount == 8)
        {
            count++;
            cout << "j = " << j << endl;
        }

        cout << endl;

    }

    cout << "約数8個持つ数の個数＝" << count << endl;

}