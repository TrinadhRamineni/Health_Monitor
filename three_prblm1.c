int fun(int arr[],int n,int target)
{
  int i,j,k,d,r,t;
  for(j=0;j<n-1;++j)
  {
    for(i=0;i<n-j-1;++i)
    {
        if(arr[i]>arr[i+1])
        {
            t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
    }
  }
  t = 32767;
  for (int i = 0; i < n; i++) {
    int j = i + 1;
    int k = n - 1;
    while (j < k) {
      int sum = arr[i] + arr[j] + arr[k];
      d = abs(sum - target);   //include <stdlib.h>
      if(d == 0) return sum;
 
      if (d < t) {
        t = d;
        r = sum;
      }
      if (sum <= target) {
        j++;
      } else {
        k--;
      }
    }
  }
  return r;
}
