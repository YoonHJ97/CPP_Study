#include <iostream>  // 입출력을 위한 헤더 파일
using namespace std;

int main() {
    int num1, num2;  // 두 개의 정수를 저장할 변수 선언

    cout << "첫 번째 숫자를 입력하세요: ";
    cin >> num1;  // 첫 번째 숫자 입력받기

    cout << "두 번째 숫자를 입력하세요: ";
    cin >> num2;  // 두 번째 숫자 입력받기

    int sum = num1 + num2;  // 두 숫자의 합 계산

    cout << "두 숫자의 합은: " << sum << " 입니다." << endl;  // 결과 출력

    return 0;  // 프로그램 종료
}
