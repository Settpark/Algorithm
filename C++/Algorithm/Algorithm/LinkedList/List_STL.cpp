//
//  List_STL.cpp
//  Algorithm
//
//  Created by 박정하 on 2021/09/22.
//

#include "List_STL.hpp"


//using namespace std;
//
//const int INF = 987654321;
//
//map<int, int> pay_map = {{29900, 300}, {34900, 1000}, {39900, 2000}, {49900, 6000}, {59900, 11000}, {69900, INF}};
//vector<pair<int, int>> pay_list = {{29900, 300}, {34900, 1000}, {39900, 2000}, {49900, 6000}, {59900, 11000}, {69900, INF}};
//
//int cal_month_overpay(int allow_data, int use_pay) {
//    int div = use_pay - allow_data;
//    if (div < 5000 && div * 20 > 25000) {
//        return 25000;
//    } else if (div < 5000) {
//        return div * 20;
//    }
//
//    if (div * 20 > 180000) {
//        return 180000;
//    }
//    else
//        return div * 20;
//}
//
//int main(void) {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int current_pay, current_use;
//    cin >> current_pay >> current_use;
//
//    int allow_data = pay_map[current_pay];
//    int result_current_pay = cal_month_overpay(allow_data, current_use);
//
//    for (int i = 0; i<pay_list.size(); i++) {
//        if (pay_list[i].first > current_use) {
//            if (i == 0) {
//
//            }
//        }
//    }
//}
