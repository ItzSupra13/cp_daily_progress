#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        bool itis = true;
        for (int bit = 0; bit < 31; bit++)
        {
            int xi = (x >> bit) & 1;
            int yi = (y >> bit) & 1;
            int zi = (z >> bit) & 1;
            if (!(
                    (xi == 0 && yi == 0 && zi == 0) ||
                    (xi == 0 && yi == 1 && zi == 0) ||
                    (xi == 0 && yi == 0 && zi == 1) ||
                    (xi == 1 && yi == 0 && zi == 0) ||
                    (xi == 1 && yi == 1 && zi == 1)))
                itis = false;
        }
        if(itis){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
