#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int students[100][2];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i][0] >> students[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << students[i][0] << " " << students[i][1] << endl;
    }
    return 0;
}