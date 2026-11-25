#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{

    unordered_map<int, int> numDicts;
    int times;
    int num;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        cin >> num;
        numDicts[num]++;
    }

    int max = 0;
    for (auto &[key, count] : numDicts)
    {
        // cerr << key << " -> " << count << '\n';
        if (count > max)
        {
            max = count;
        }
    }
    cout << max;
}