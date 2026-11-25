#include <iostream>
#include <vector>

using namespace std;

vector<int> stepUpOrDown(vector<int> series)
{
    int i = 0;
    int N = series.size();
    int current = series.size();
    vector<int> returnSeries(N);
    while (i < N)
    {
        if (series[i] > current)
        {
            returnSeries[i] = 1;
        }
        else
        {
            returnSeries[i] = 0;
        }
        current = series[i];
        i++;
    }
    return returnSeries;
}

void printVec(vector<int> arr)
{
    cout << "{" << " ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ",";
    }
    cout << "}";
}

int main()
{
    vector<int> arr = {5, 6, 5, 4};
    vector<int> a = stepUpOrDown(arr);
    printVec(a);
}