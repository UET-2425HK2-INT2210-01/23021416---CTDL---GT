#include <bits/stdc++.h>
using namespace std;
class Point{
    public:
    double x,y;
    void Import(){
        cin>>x>>y;
    }
    void Print(){
        cout<<"Điểm có tọa độ: ("<<x<<","<<y<<")"<<endl; 
    }
};
class Chiphuong{
    public:
    double a,b; Point D1, D2;
    Chiphuong(Point d1,Point d2){
        D1= d1; D2= d2;
        a= D2.x - D1.x;
        b= D2.y - D1.y;
        // D1(x,y) và D2(x,y) là 2 điểm trên 1 đường thẳng
    }
    void Print(){
        cout<<"Vector chỉ phương của đường thẳng là: ("<<a<<","<<b<<")"<<endl;
    }
};
void hamcanlam(Chiphuong A1, Chiphuong A2){
    /* A1 và A2 là 2 đường thẳng có vector chỉ phương là (A1.a, A1.b) và (A2.a, A2.b) ||||| (A1.D1.x , A1.D1.y) và (A2.D1.x , A2.D1.y) là 2 điểm bất
    kỳ trên 2 đường thẳng => Lấy vector chỉ phương cho 2 điểm bất kỳ đó, nếu tỉ lệ trùng với tỉ lệ của 2 vector chỉ phương => trùng nhau
    Vector chỉ phương của 2 điểm bất kỳ trên có dạng (A2.D1.x - A1.D1.x , A2.D1.y - A1.D1.y) */
    if( A1.a * A2.b == A2.a * A1.b ){
        if((A2.D1.x - A1.D1.x) * A1.a == (A2.D1.y - A1.D1.y) * A1.b){
            cout<<"MANY";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        // Dùng định thức Cramer 
        double det = A1.a * A2.b - A2.a * A1.b;
        double t = ((A2.D1.x - A1.D1.x) * A2.b - (A2.D1.y - A1.D1.y) * A2.a) / det;
        double x = A1.D1.x + t * A1.a;
        double y = A1.D1.y + t * A1.b;
        cout<< x <<" "<< y;
    }
}
int main()
{
    Point a,b,c,d;
    a.Import(); b.Import(); c.Import(); d.Import();
    a.Print(); b.Print(); c.Print(); d.Print();
    Chiphuong A1(a,b), A2(c,d);
    A1.Print(); A2.Print();
    hamcanlam(A1,A2);
    return 0;
}