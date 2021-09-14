#include <iostream>
#include <stack>
#include <string>

int main() {
  std::stack<int> stack;
  std::string str;
  std::cin >> str;

  bool flag = true;
  int top = 0;

  for(size_t i = 0; i < str.size(); ++i)
  {
    if (str[i] == '[' or str[i] == ']' or
        str[i] == '{' or str[i] == '}' or
        str[i] == '(' or str[i] == ')')
    {
      if (str[i] == '{' or str[i] == '[' or str[i] == '(')
      {
        stack.push(i);
        continue;
      }

      else if (stack.empty())
      {
        std::cout << i + 1;
        flag = false;
        break;
      }
      top = stack.top();
      stack.pop();

      if (((str[top] == '[' and str[i] != ']') or
           (str[top] == '{' and str[i] != '}') or
           (str[top] == '(' and str[i] != ')')))
      {
        std::cout << i + 1;
        flag = false;
        break;
      }
    }
  }
  if(stack.empty() and flag)
    std::cout << "Success";
  else if (!stack.empty() and flag)
    std::cout << stack.top() + 1;

  return 0;
}