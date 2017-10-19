#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <vector>

using namespace std;

struct Point
{
    double x;
    double y;
};

double triangleArea(Point A, Point B, Point C)
{
    double m = fabs((B.x - A.x)*(C.y - A.y) - (B.y - A.y)*(C.x - A.x));

    return 0.5 * m;
}


int main()
{
    Point A,B,C,S;
    double triangleAreaABC;
    double triangleAreaASB;
    double triangleAreaASC;
    double triangleAreaBSC;

    cin >> S.x >> S.y;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;

    triangleAreaABC = triangleArea(A,B,C);
    triangleAreaASB = triangleArea(A,S,B);
    triangleAreaASC = triangleArea(A,S,C);
    triangleAreaBSC = triangleArea(B,S,C);

    cout << triangleAreaABC << endl;

    if(triangleAreaABC == (triangleAreaASB + triangleAreaASC + triangleAreaBSC))
        cout << "Point is in triangle" << endl;
    else
        cout << "Point is not in triangle" << endl;


    return 0;
}
