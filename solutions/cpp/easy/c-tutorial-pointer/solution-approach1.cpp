// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true
// Problem     Pointer
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-10-07, 11:08 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <cmath>

void update(int *a,int *b) 
{
    int c;
    c=*a;
  (*a)=((*a)+(*b));
  (*b)=(abs(c-(*b)));
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
