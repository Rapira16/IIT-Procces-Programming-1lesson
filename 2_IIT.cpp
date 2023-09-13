#include <iostream>
#include <math.h>

using namespace std;


void ex_1(){
    double h, R, r, l;
    cout << "Введите размерности усеченного конуса:" << endl;
    cout << "Высота" << endl;
    cin >> h;
    cout << "Радиус нижний" << endl;
    cin >> R;
    cout << "Радиус верхний" << endl;
    cin >> r;
    cout << "l" << endl;
    cin >> l;
    if ((h == 0) or (R == 0) or (r == 0) or (l == 0)){
        cout << "Конус не существует" << endl;
    } else {
        cout << "Объем " << (3.14 * h * (R*R + R*r + r*r))/3 << endl;
        cout << "Площадь " << 3.14*(R*R + (R+r)*l + r*r) << endl;
    }
}


void ex_2(){
    double a, x, w;
    cout << "x = ";
    cin >> x;
    cout << "a = ";
    cin >> a;
    if((fabs(x) < 1) and (x != 0)){
        w = a*log(fabs(x));
        cout << "w = " << w << endl;
    } else if((fabs(x) >= 1) and (a >= x*x)) {
        w = sqrt(a - x*x);
        cout << "w = " << w << endl;
    } else {
        cout << "Вне области определения" << endl;
    }

}


void ex_3(){
    double x, y, b;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "b = ";
    cin >> b;
    if ((b > y) and (b >= x)){
        cout << "z = " << log(b - y)*sqrt(b - x) << endl;
    } else {
        cout << "Вне области определения" << endl;
    }
}


void ex_4(){
    int n;
    cout << "Введите 1 число ";
    cin >> n;
    for (int i = n; i <= n + 9; i++){
        cout << i << " ";
    }
}


void ex_5(){
    double x = -4;
    double y;
    cout << "x | y" << endl;
    while (x <= 4){
        if (x != 1){
            y = (x*x - 2*x + 2)/(x - 1);
        } else {
            cout << x << " | no" << endl;
        }
        cout << x << " | " << y << endl;
        x += 0.5;
    }
}

int main(){
    ex_5();
    return 0;
}
