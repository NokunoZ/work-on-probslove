#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    int num;
    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        cin >> num;
        if (num >= 0)
        {
            total += num;
        }
    }
    cout << total;
}