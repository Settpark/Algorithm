#pragma once

int turnOffIdxBit(int num, int idx); //idx번째 비트 끄기
int xorIdxBit(int num, int idx); //idx번째 비트 토글하기
int findLowestSetBit(int num); //num의 최하위에 켜져있는 비트 찾기
int setAllBits(int n); //크기가 n인 모든 비트 켜키
int turnOnIdxBit(int num, int idx); //idx번째 비트 켜기
bool checkIdxBit(int num, int idx); //idx번째 비트가 켜져있는지 확인하기