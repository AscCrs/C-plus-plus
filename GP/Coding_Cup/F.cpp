#include <iostream>

using namespace std;

int main()
{
    double x1, y1, x2, y2;
    double m, mx;
    double x, y;
    int n;
    int amiga_encontrada = 0;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> n;
    m = (y2 - y1) / (x2 - x1);
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x1 == x2)
        {
            if ((x == x1 && y1 <= y && y <= y2) || (x == x1 && y1 >= y && y >= y2))
            {
                amiga_encontrada++;
            }
        }
        else {mx = (y - y2) / (x - x2);

        if ((mx == m && (x1 <= x && x <= x2 && y1 <= y && y <= y2)) || (mx == m && (x1 >= x && x >= x2 && y1 >= y && y >= y2)))
        {
            amiga_encontrada++;
        }}
    }
    cout << amiga_encontrada;
}


