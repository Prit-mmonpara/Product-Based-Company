
class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
    int temp = k;

  int i = 0, j = 0;
  int maxi = 0;
  deque<int> dq; 
  
  while(j < a.size())
  {
      if(a[j] == 0)
      {
        if(a[j] == 0 && temp == 0)
        {
          while(a[i] != 0)
          {
              dq.pop_front();
              i++;
          }
          dq.pop_front();
          i++;

          dq.push_back(a[j]);
        }else
        {
          temp--;
          dq.push_back(a[j]);
        }
      }
    else{
        dq.push_back(a[j]);
      }
    j++;
    int n = dq.size();
    maxi = max(maxi, n);
  }
  return maxi;
    }
};
