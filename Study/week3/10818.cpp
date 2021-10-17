#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];

    int max;
    int min;

    cin >> arr[0];
    min = arr[0];
    max = arr[0];

    for (int i = 1; i < N; i++)
    {
        cin >> arr[i];

        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << min << " " << max;

    return 0;
}