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

double triangleArea(vector <Point> pointsCoOrdinates, int pointBIndex, int pointCIndex)
{
    vector <Point> arr = pointsCoOrdinates;
    if(pointCIndex >= arr.size())
        return 0;

    double m = fabs((arr[pointBIndex].x - arr[0].x)*(arr[pointCIndex].y - arr[0].y) - (arr[pointBIndex].y - arr[0].y)*(arr[pointCIndex].x - arr[0].x));

    pointBIndex +=1;
    pointCIndex +=1;

    return 0.5 * m + triangleArea(pointsCoOrdinates, pointBIndex, pointCIndex);
}


int main()
{
    Point A, B, C;
    vector <Point> pointsCoOrdinates;
    int numberOfVertexes;
    double area = 0;

    cin >> numberOfVertexes;

    while(numberOfVertexes > 0)
    {
        cin >> A.x >> A.y;
        pointsCoOrdinates.push_back(A);
        numberOfVertexes -=1;
    }

    area = triangleArea(pointsCoOrdinates, 1, 2);

    cout << area;
    return 0;
}
