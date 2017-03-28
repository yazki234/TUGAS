#include <iostream>
using namespace std;

void prosesbaca();
float prosesfarenheit();
int proseskelvin();
float prosesreamur();
void prosestampil();

float x;

int main() {
    prosesbaca();
    prosestampil();

return 0;
}
 void prosesbaca() {
    cout << "masukkan nilai celcius : ";
    cin >> x;
}

float prosesfarenheit() {
    float f;
    f = x * 1.8 + 32 ;

    return f;
}

float prosesreamur() {
    float r;
    r = x * 0.8 ;

    return r;
}

int proseskelvin() {
    int k;
    k = x + 273 ;

    return k;
}

void prosestampil() {
    cout << "Dalam farenheit : " << prosesfarenheit() << endl;
    cout << "Dalam Reamur : " << prosesreamur() << endl;
    cout << "Dalam Kelvin : " << proseskelvin() << endl;

}
