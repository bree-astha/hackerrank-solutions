// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
// Problem     Arrays Introduction
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-10-06, 11:48 p.m.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int N;
   cin>>N;
 vector<int>x(N);
 for(int i=0;i<N;i++)
 cin>>x[i];
 for(int i=N-1;i>=0;i--)
 cout<<x[i]<<" ";
    return 0;
}
