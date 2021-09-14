#include <iostream>
#include <vector>
#include <cmath>

bool algorythm(int vect[], int size)
{
  if(size == 1)
  {
    return vect[0] == 0;
  }
  int m = std::ceil(size / 2);
  if(vect[m] == m)
  {
    return true;
  }

  else if(vect[m] < m)
  {
    int res[size - m];
    for(size_t i = 0; i < size - m; ++i)
    {
      res[i] = vect[m + 1 + i];
    }
    return algorythm(res, size - m);
  }
  else
  {
    int res[size - m];
    for(size_t i = 0; i < size - m; ++i)
    {
      res[i] = vect[i];
    }
    return algorythm(res, size - m);
  }
}



int main()
{
  int test[] = {
    -7, -5, -4, -3, -2
  };
  if(algorythm(test, 5))
  {
    std::cout << "ok";
  }
  return 0;
}
