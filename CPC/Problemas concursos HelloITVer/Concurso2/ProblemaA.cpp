#include <iostream>
#include <math.h>
// !Ceil 
// !Floor 

using namespace std;

int main()
{
    int casos;
    float largo,ancho;
    float radares;
    cin >> casos;
    size_t i;
    for (i = 0; i < casos; i++)
    {
        cin >> largo >> ancho;
        radares = ceil((largo-2)/3)*ceil((ancho-2)/3);
        cout << (int)radares << "\n";
    }
 
    return 0;
}