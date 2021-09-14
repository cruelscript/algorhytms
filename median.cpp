#include <iostream>
#include <vector>
#include <random>

typedef std::pair<int, int> pair;

pair split(std::vector<int>& a, int j)
{
  int elementJ = a[j];
  int index = 0; // Хранит индекс элемента, следующего за элементом, на место которого переставили другой элемент.

  for(size_t i = 0; i < a.size(); ++i)
  {
    if(a[i] < elementJ)
    {
      std::swap(a[i],  a[index]);
      ++index;
    }
  }

  int min = -1; // Индекс первого элемента, равного a[j]
  int max = -1; // Индекс последнего элемента, равного a[j]
  bool first = true; // Переменная, которая нужна для того, чтобы записать индекс min

  for(size_t i = 0; i < a.size(); ++i)
  {
    if(a[i] == elementJ)
    {
      if(first)
      {
        min = index;
        first = false;
      }
      std::swap(a[i], a[index]);
      ++index;
    }
  }
  if(!first)
  {
    max = index - 1;
  }
  return {min, max};
}

int select(std::vector<int> a, int k)
{
  std::random_device seed;
  std::uniform_int_distribution<int> distribution(0, a.size() - 1);

  int j = distribution(seed);

  pair p = split(a, j);

  if(k <= p.first) //k <= min
  {
    return select(std::vector<int>(a.begin(), a.begin() + p.first), k);
  }
  if(k <= p.second + 1) // k <= max + 1
  {
    return a[p.first];
  }
  return select(std::vector<int>(a.begin() + p.second + 1, a.end()), k - p.second - 1);
}

int main()
{
  std::vector<int> array;

  size_t size = 0;
  std::cin >> size;

  int index = 0;
  for(size_t i = 0; i < size; ++i)
  {
    std::cin >> index;
    array.push_back(index);
  }

  int j;
  std::cin >> j;

  pair pairSplit = split(array, j);
  for(int a: array)
  {
    std::cout << a << " ";
  }
  std::cout << "\n" << pairSplit.first << " " << pairSplit.second;

  int result = select(array, std::ceil((double)(size)/2.0));
  std::cout << "\nmedian: " << result;
}
