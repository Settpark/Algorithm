#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> coin(21); //c 스타일의 배열은 얕은 복사가 발생함

int main()
{
    cin >> n; // n은 20이하, 뒷면이 보이는 개수를 최소화
    int minimum = 987654321;
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            char l;
            cin >> l;
            if (l == 'T')
            {
                k |= (1 << j);
            }
        }
        coin[i] = k;
    }

    for (int mask = 0; mask < (1 << n); mask++)
    {
        auto copied = coin;
        for (int s = 0; s < n; s++)
        {
            int shifted = 1 << s;
            if (mask & shifted)
            {
                copied[s] ^= (1 << n) - 1;
            }
        } //행을 뒤집는 연산식
        int currentCount = 0;
        for (int a = 0; a < n; a++) //열을 뒤집는데
        {
            int tailCount = 0;
            int targetBit = (1 << a);
            for (int b = 0; b < n; b++)
            {
                if (copied[b] & targetBit)
                {
                    tailCount++;
                }
            }
            currentCount += min(tailCount, n - tailCount); //이렇게 연산하면 뒤집었을때 결과도 어차피 보이기 때문에 바로 연산
        }
        minimum = min(currentCount, minimum);
    }
    cout << minimum;
    return 0;
}