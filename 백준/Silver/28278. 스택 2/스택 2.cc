#include <iostream>
#include <stack>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> s;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        switch (num)
        {
        case 1:

            int x;
            cin >> x;

            s.push(x);

            break;
        case 2:
            if (!s.empty())
            {
                cout << s.top() << '\n';
                s.pop();
            }
            else
                cout << -1 << '\n';
            break;
        case 3:
            cout << s.size() << '\n';
            break;
        case 4:
            if (!s.empty())
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << 1 << '\n';
            }
            break;
        case 5:
            if (!s.empty())
            {
                cout << s.top() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        }
    }
}