//MinimalEnclosingCircle - MEC.cpp.
//Emrullah Arseven emrullaharseven@yandex.com


#include <iostream>
using namespace std;





bool isInside(int circle_x, int circle_y,
    int rad, int x, int y)
{
    if ((x - circle_x) * (x - circle_x) +
        (y - circle_y) * (y - circle_y) <= rad * rad)
        return true;
    else
        return false;
}





int main()
{



    double  points_x[3];
    double points_y[3];
    double x = 0, y = 0, b = 0, r = 0, r2 = 0, circle = 0;
    int c = 3, a = 0;

    cout << "Please give points  (x,y) x- enter  y- enter";

    for (int i = 0; i < c; i++) {
        cin >> points_x[i];
        cin >> points_y[i];
    }
    x = points_x[0];
    y = points_y[1];
    double circle_x = 0.0, circle_y = 1.0, rad = 1.0;
    int t = 0;
    while (a == 0) {
        for (int i = 0; i < 3; i++) {

            if (isInside(points_x[i], points_y[i], rad, x, y)) {
                cout << "Inside";
                t = t + 1;

            }
            else {
                cout << "Outside";
                rad = rad + 0.0001;
                t = 0;
            }
            if (t == 3) {
                cout << rad << endl;
                int j = 0; 
                
                while (isInside(points_x[j], points_y[j], rad, x, y)) {
                        x = x - 0.001;
                        y = y - 0.001;
                        rad = rad - 0.1;
                        j++;
                        if (j == 2) {
                            j = 0;
                        }
                
                }
                a = 1;
               



            }

        }
        cout << rad << endl;
    }
}
