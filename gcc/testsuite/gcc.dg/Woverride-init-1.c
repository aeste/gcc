/* Test for warnings for overriding designated initializers:
   -Woverride-init.  Bug 24010.  */
/* Origin: Joseph Myers <joseph@codesourcery.com> */
/* { dg-do compile } */
/* { dg-options "-Woverride-init" } */

struct s { int a; int b; int c; };
union u { char a; long long b; };

struct s s0 = {
  .a = 1,
  .b = 2,
  .a = 3, /* { dg-warning "initialized field overwritten|near init" } */
  4, /* { dg-warning "initialized field overwritten|near init" } */
  5
};

union u u0 = {
  .a = 1,
  .b = 2, /* { dg-warning "initialized field overwritten|near init" } */
  .a = 3 }; /* { dg-warning "initialized field overwritten|near init" } */

int a[5] = {
  [0] = 1,
  [1] = 2,
  [0] = 3, /* { dg-warning "initialized field overwritten|near init" } */
  [2] = 4
};
