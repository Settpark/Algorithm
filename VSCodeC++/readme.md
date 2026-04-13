# 컴파일하고 빌드할 때

## 특정 폴더에 파일이 없으면
g++ -std=c++14 -Wall *.cpp -o test.out
## 특정 폴더에 파일이 있으면
g++ -std=c++14 -Wall *.cpp bitmasking/*.cpp -o test.out

# 실행
/test.out