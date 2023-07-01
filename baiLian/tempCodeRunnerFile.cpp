#include <iostream>
using namespace std;

int main(void)
{
    double r, res = 0.0;
    int n;
    cout<<"cin please"<<endl;
    cin >> r >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            res = r;
        else
        {
            res *= r;
        }
    }
    cout.setf(ios::fixed);
    cout << res << endl;

    return 0;
}