#include <iostream>
#include <cmath>
#include "Vector2.h"
using namespace std;
int main (){
    Vector2 a(1, 1);
    Vector2 b(2, 3);
    Vector2 c = a + b;
//    cout << c.getLen() << std::endl;
//    cout << c.getPhi() << std::endl;
//    cout << c.getPhiDeg() << std::endl;
    Vector2 d(6, 7);
    cout<<d.x<<" "<<d.y<<endl;
    cout<<c.x<<" "<<c.y<<endl;
    d-=a;
    cout<<d.x<<" "<<d.y<<endl;
    d/=5;
    cout<<d.x<<" "<<d.y<<endl;
    Vector2 v1(2, 3);
    Vector2 v2(2, 3);
    cout<<(v1==v2)<<endl;
    cout<<a.skew_scalar_product(b)<<endl;
    a.norm();
    cout<<a.x<<" "<<a.y<<endl;
    cout<<b.getLen()<<endl;
    b.change_len(10);
    cout<<b.getLen()<<endl;
    Vector2 r1(1,1);
    Vector2 r2(-1, 1);
    cout<<r1.phi<<endl;
    cout << v1.scalar_product(v2) << endl;

    return 0;
}
