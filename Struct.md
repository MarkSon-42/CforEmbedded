# 구조체, 포인터 이동

name
age
height

-> human object

: struct

개발자가 정의한 변수

사용자 정의 변수

구조체

### 구조체? : 여러 변수들을 모아서, 하나의 객체를 구성할 때 사용하는 사용자 정의 타입


~~~
struct person
{
  char *name;
  int age;
};
struct person user1;
user1.name = "h user";
print("%s", user1.name);

struct person
{
  char *name;
  int age;
}test;
test.name = "k user";
test.age = 33;
print("%s: %d", test.name, test.age);
~~~



