#include <iostream>
#include <vector>

using namespace std;

vector<int> arr = {2, 4, 6, 8};

int squre(int x)
{
    return x * x;
}

int returnRsquare(int x, int y)
{
    return squre(x) + squre(y);
}

int checkPoint(int x)
{ // input will be return Rsquare
    int point = 5;
    if (x > 8 * 8)
    {
        return 0;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (x <= squre(arr[i]))
        {
            return point;
        }
        point--;
    }
    return 0;
}

int main()
{
    int totalPoint = 0;
    int times;
    int x, y;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        cin >> x >> y;
        int Rs = returnRsquare(x, y);
        totalPoint += checkPoint(Rs);
    }
    cout << totalPoint;
}
