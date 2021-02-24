#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int shift = 0;
    int shiftedArr[10] = { 0 };
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "  ";


    }
    cout << endl;
    cout << "на сколько значений сместить массив? " << endl; cin >> shift;

    for (int i = 0; i < 10; i++)
    {
        if (i < shift)
        {
            shiftedArr[(shift - i) - 1] = arr[9 - i];
        }
        else
        {
            shiftedArr[i] = arr[i - shift];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << shiftedArr[i] << "  ";
    }


    return 0;
}