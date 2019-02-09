#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int actual = 1;
    for (int i = 1; i <= 10; i++)
    {
        int x = 0;
        cout << "cbrt(" << i << ") = ";
        for (int j = 1; j <= i; j++)
        {
            cout << "+" << actual << " ";
            x += actual;
            actual += 2;
        }
        cout << "= " << x << endl;
    }

    return 0;
}
