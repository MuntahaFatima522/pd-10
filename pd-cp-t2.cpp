#include <iostream>
using namespace std;

int CalculateRotation(string arr[], int size);

int main()
{
    int size;
    cout << "Enter the number of times you want to enter the elements: ";
    cin >> size;
    string arr[size];
    cout << "Enter the elements of array one per line: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = CalculateRotation(arr, size);
    cout << "No of complete rotation: " << abs(result);

    return 0;
}

int CalculateRotation(string arr[], int size)
{
    int result=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == "right")
        {
            result = result + 90;
        }
        else if (arr[i] == "left")
        {
            result = result - 90;
        }
    }

    result = result / 360;
    return result;
}