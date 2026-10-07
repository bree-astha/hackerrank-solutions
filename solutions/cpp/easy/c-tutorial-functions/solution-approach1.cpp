// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
// Problem     Functions
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-10-07, 10:59 p.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a,int b,int c,int d)
{
  int  max=0;
  if(a>b&&a>c&&a>d) 
   max=a;
   else if(b>a&&b>c&&b>d)
   max=b;
   else if(c>a&&c>b&&c>d)
   max=c;
   else 
   max=d;
   return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
