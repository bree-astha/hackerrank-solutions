// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
// Problem     Variable Sized Arrays
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-10-14, 11:54 p.m.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
    cin.tie(NULL);
      int n,q;
      int k=q;
      cin>>n>>q;
      vector<vector<int>>a(n);
      for ( int i=0;i<n;i++)
      {
        int k;
        cin>>k;
        a[i].resize(k);
        for(int j=0;j<k;j++)
        cin>>a[i][j];
      }
      for(int idx=0;idx<q;++idx)
      {
        int i,j;
        cin>>i>>j;
        cout<<a[i][j]<<"\n";
      }
    return 0;
}
