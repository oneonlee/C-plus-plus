#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];

    int max;

    cin >> arr[0];
    max = arr[0];
    for (int i = 1; i < N; i++)
    {
        cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    double newScore[N];
    double sum = 0;

    for (int i = 0; i < N; i++)
    {
        newScore[i] = double(arr[i]) / double(max) * 100;
        sum += newScore[i];
    }

    cout << sum / N;

    return 0;
}