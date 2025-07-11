#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (((2 * n - 1) / 2) >= i)
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                if (j >= ((2 * n - 1) / 2) - i && j <= ((2 * n - 1) / 2) + i)
                {
                    cout << "*";
                }
                else if(j < ((2 * n - 1) / 2) - i)
                {
                    cout << " ";
                }
            }
        }
        else
        {
            
            for (int j = 0; j < 2 * n - 1; j++)
            {
              if( i - ((2 * n - 1) / 2)<=j && j< (2 * n -1)-i + ((2 * n - 1) / 2))
                {
                    
                       cout << "*";  
                    
                }else if (i - ((2 * n - 1) / 2)>j){
                    cout << " ";
                }
            }
        }
        cout << '\n';
    }
}