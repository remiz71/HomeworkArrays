#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[5], summ = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Введите " << i + 1 << " значение массива: "; cin >> arr[i];
    }
    cout << "Прямой порядок массива ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Обратный порядок массива ";
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        summ += arr[i];
    }
    cout << "Сумма всех элементов массива : " << summ << endl;
    cout << "Среднее арифметическое всех чисел массива :" << summ / 5 << endl;
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    cout << "Наименьшее значение массива: " << min << endl;
    cout << "Наибольшее значение массива: " << max << endl;

    return 0;
}
