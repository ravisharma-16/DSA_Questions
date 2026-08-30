#include <iostream>
using namespace std;
int main()
{
    char arr[10], arr2[10];
    int count, k = 0;
    cout << "enter the string = ";
    cin.get(arr, 10);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count = 1;
        for (int j = i + 1; arr[j] != '\0'; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                i = j;
            }
        }
        arr[k++] = arr[i];
        arr[k++] = count + '0';
    }
    arr[k] = '\0';
    cout << "string compression = ";
    cout << arr << " ";
}

#include <iostream>
using namespace std;
int main()
{
    char arr[10];
    int count, index = 0, lenght = 0;
    cout << "enter the string = ";
    cin.get(arr, 10);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        lenght++;
    }

    for (int i = 0; i <= lenght; i++)
    {
        char ch = arr[i];
        count = 0;
        while (i <= lenght && arr[i] == ch)
        {
            count++;
            i++;
        }
        if (count == 1)
        {
            arr[index++] = ch;
        }
        else
        {
            arr[index++] = ch;
            string str = to_string(count);
            for (char dig : str)
            {
                arr[index++] = dig;
            }
        }
        i--;
    }
    arr[index] = '\0';
    cout << "string compression = ";
    cout << arr << " ";
}
