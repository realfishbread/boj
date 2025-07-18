#include <iostream>
#include <stack>

using namespace std;

int main()
{

    stack<char> s;

    string str;

    char gwalho;

    bool end = true;    // 문장끝나고 이어갈지 말지 판단
    bool judge = false; // no, yes 판단

    int i = 0;

    while (true)
    {
        getline(cin, str);
        if (str == ".")
            break;

        for (char gwalho : str)
        {
            switch (gwalho)
            {
            case '(':
                end = false;

                s.push(gwalho);
                break;
            case '[':
                end = false;
                s.push(gwalho);
                break;
            case ']':
                end = false;
                if (!s.empty() && s.top() == '[')
                {
                    s.pop();
                }
                else
                {
                    judge = true;
                }
                break;
            case ')':
                end = false;
                if (!s.empty() && s.top() == '(')
                {
                    s.pop();
                }
                else
                {
                    judge = true;
                }
                break;
            }
        }
        if (judge || !s.empty())
            cout << "no\n";
        else
            cout << "yes\n";

        // 초기화
        judge = false;
        while (!s.empty())
            s.pop();
    }
}