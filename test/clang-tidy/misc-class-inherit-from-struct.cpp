// RUN: %check_clang_tidy %s misc-class-inherit-from-struct %t

struct A
{
    int a;
};

class B:A
// CHECK-MESSAGES: :[[@LINE-1]]:7: warning: classes should not inherit from structs [misc-class-inherit-from-struct]
{
    int b;
};

class C
{
    int c;
};

class D:C
{
    int d;
};
