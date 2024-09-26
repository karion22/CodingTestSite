## Programmers Code Test 환경
 - C++ : Clang++ 10.0 (C++ 17)
 - C# : Mono C# Compoiler 6.10.0

## C++ 제한사항


## C# 제한사항
 - Version 7.0 이상 :
   1. 튜플 지원
```
    var test = (int, int));
```
   3. 출력 변수 선언
```  
    int.TryParse(value, out int outValue);
```
 - Version 8.0 이상 :
   1. 재귀 패턴 :
``` 
    int GetValue(int value) => value switch { 1 => 1, _=> 1000 };
```
## 참고사항
 - 2024년 9월 기준 C# 최신 버전은 C# 13
 - Unity3D 6000.0 : C# Complier Roslyn, C# Language Version 9.0

| Unity Version | Runtime Version | Compiler | C# Version |
| --- | --- | --- | --- |
| 2021.02  | .NET 4.x Equivalent |  Roslyn | 9.0 |
| 2020.02 ~ 2021.01 | .NET 4.6 Equivalent | Roslyn | 8.0 |
| 2019.02 ~ 2020.01 | .NET 4.6 Equivalent | Roslyn | 7.3 |
| 2018.03 ~ 2019.01 | .NET 3.5 Equivalent \n .NET 4.6 Equivalent | mcs \n Rolsyn | 4 \n 7.3 |
| Prev | Unknown | Unknown | - |
