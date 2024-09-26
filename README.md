## Programmers Code Test 환경
 - C++ : Clang++ 10.0 (C++ 17)
 - C# : Mono C# Compoiler 6.10.0

## C++ 제한사항


## C# 제한사항
 - Version 7.0 이상 :
   1. 튜플 지원
      (ex. var test = (int, int))
   
   2. 출력 변수 선언
      (ex. out int value)
  
 - Version 8.0 이상 :
   1. 재귀 패턴 :
      (ex. int GetValue(int value) => value switch { 1 => 1, _=> 1000 };
