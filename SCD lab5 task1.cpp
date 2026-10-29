#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {30, 10, 50, 20, 40};
    int max = arr[0];
    int min = arr[0];
    int temp;

    // Find maximum and minimum
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    // Bubble Sort
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display results
    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;

    cout << "Sorted Array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
