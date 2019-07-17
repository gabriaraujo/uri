#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A, B, MEDIA;

    cin >> A >> B;

    if ((A >= 0 && A <= 10) && (B >= 0 && B <= 10)) {

      MEDIA = ((A * 3.5) + (B * 7.5)) / 11;

      cout << fixed << setprecision(5) << "MEDIA = " << MEDIA << endl;
      }

    return 0;
}
