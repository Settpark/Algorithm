//
//  PRO_KAKAO_Stack_Imple.hpp
//  Algorithm
//
//  Created by 박정하 on 2022/01/03.
//

#ifndef PRO_KAKAO_Stack_Imple_hpp
#define PRO_KAKAO_Stack_Imple_hpp

#include <bits/stdc++.h>

using namespace std;

class PRO_KAKAO_Stack_Imple {
public:
    bool isBalance(string a);
    bool isCorrect(string a);
    string splitString(int index, string s);
    pair<string, string> makeBalance(string a);
    string myreverse(string s);
    string recur(string s);
    string solution(string p);
};

#endif /* PRO_KAKAO_Stack_Imple_hpp */
