// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=true
// Problem     Classes and Objects
// Difficulty  Easy
// Subdomain   Classes
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-10-07, 11:27 p.m.
// ──────────────────────────────────────────────────


class Student 
{
    public:
    int arr[5];
    void input()
    {
        int i;
        for(i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    }
  int calculateTotalScore()
  {
    int sum;
    int i;
    for(i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    return sum;
  }  
};


