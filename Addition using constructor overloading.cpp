//Name : Ninad Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
class Sum {
public:
    Sum(int x, int y) {
        cout << "Integer Sum = " << (x + y) << endl;
    }
    Sum(float x, float y) {
        cout << "Float Sum = " << (x + y) << endl;
    }
};
int main() {
    int a, b;
    float p, q;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter two floats: ";
    cin >> p >> q;
    cout << "Results:" << endl;
    Sum s2(a, b);  
    Sum s3(p, q);  
    return 0;
}
