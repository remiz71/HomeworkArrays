#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int arr[5], summ = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "������� " << i + 1 << " �������� �������: "; cin >> arr[i];
    }
    cout << "������ ������� ������� ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "�������� ������� ������� ";
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        summ += arr[i];
    }
    cout << "����� ���� ��������� ������� : " << summ << endl;
    cout << "������� �������������� ���� ����� ������� :" << summ / 5 << endl;
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    cout << "���������� �������� �������: " << min << endl;
    cout << "���������� �������� �������: " << max << endl;

    return 0;
}