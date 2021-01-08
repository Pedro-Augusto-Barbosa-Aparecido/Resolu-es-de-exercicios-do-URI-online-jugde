#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

int dia = 0, h = 0, m = 0, s = 0;
int _dia = 0, _h = 0, _m = 0, _s = 0;
int w = 0, x = 0, y = 0, z = 0;

cin >> dia >> h >> m >> s;
cin >> _dia >> _h >> _m >> _s;

w = _dia - dia;
y = _m - m;
z = _s - s;

x = ((24 - h) * w) - _h;

printf("%d dia(s)\n %d hora(s)\n %d minuto(s)\n %d segundo(s)\n", w, x, y, z);

return 0;
}
