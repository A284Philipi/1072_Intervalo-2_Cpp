#include <iostream>

using namespace std;

int main()
{
    int in = 0, out = 0, a, cont = 0, x;
    cin >> x;
    while (cont < x){
        cin >> a;
        switch (a){
    case 10 ... 20 :
        in ++;
        break;
    case 21 ... 10000000 :
        out ++;
        break;
    case -1000000 ... 9 :
        out ++;
        break;
        }
        cont ++;
    }
    cout << in << " in" << "\n" << out << " out" <<endl;
    return 0;
}
