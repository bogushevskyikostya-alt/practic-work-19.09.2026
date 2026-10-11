/* Завдання 1
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int year;
    cout << "Введіть номер року: ";
    cin >> year;
    int isLeap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    int days = 365 + isLeap;

    cout << "У цьому році " << days << " днів." << endl;

    return 0;
}*/
/*Завдання 2
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int grn, kop;
    cout << "Введіть гривні: ";
    cin >> grn;
    cout << "Введіть копійки: ";
    cin >> kop;

    grn += kop / 100;
    kop = kop % 100;

    cout << "Виправлена сума: " << grn << " грн. " << kop << " коп." << endl;

    return 0;
}
*/
/* Завдання 3
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double a, b, c;
    cout << "Введіть довжину паралелепіпеда (a): ";
    cin >> a;
    cout << "Введіть ширину паралелепіпеда (b): ";
    cin >> b;
    cout << "Введіть висоту паралелепіпеда (c): ";
    cin >> c;

    double volume = a * b * c;
    cout << "Об'єм паралелепіпеда дорівнює: " << volume << endl;

    return 0;
}
*/
/* Завдання 4
#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double x1, y1, x2, y2, scale;
    cout << "Введіть координати першого пункту (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введіть координати другого пункту (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Введіть масштаб карти (скільки кілометрів в 1 одиниці карти): ";
    cin >> scale;

    double mapDistance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double realDistance = mapDistance * scale;

    cout << "Відстань між пунктами на місцевості: " << realDistance << " км" << endl;

    return 0;
}
*/
/*Завдання 5
#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double radius;
    cout << "Введіть радіус кулі: ";
    cin >> radius;

    const double PI = 3.141592653589793;
    double volume = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << "Об'єм кулі дорівнює: " << volume << endl;

    return 0;
}
*/