#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size OF Array = ";
    cin >> n;

    char arr[n + 1];
    cin >> arr;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == 1)
    {
        cout << "Word is a Pallindrome" << endl;
    }
    else
    {
        cout << "Word is not a Pallindrome" << endl;
    }

    return 0;
}
