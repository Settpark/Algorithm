//
//  Point.hpp
//  Algorithm
//
//  Created by 박정하 on 2021/11/29.
//

#ifndef Point_hpp
#define Point_hpp

#include <bits/stdc++.h>

using namespace std;

class Point {
    int x;
    int y;
public:
    Point(int _x = 0, int _y = 0) { }
    void Print() const {cout << x << ',' << y << endl;}
    void operator+(Point arg) {
        cout << "oper" << endl;
    }
};

#endif /* Point_hpp */
