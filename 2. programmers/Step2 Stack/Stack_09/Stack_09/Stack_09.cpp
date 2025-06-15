#include <stack>
#include <string>
#include <iostream>

using namespace std;

string solution(int decimal)
{
    string result = "";
    stack<int> stack;

    while(decimal > 0)
    {

        stack.push(decimal%2);
        decimal/= 2;
    }

   while(!stack.empty())
   {
       result += to_string(stack.top());
       stack.pop();
   }
    
    return result;
}

int main()
{
    cout << solution(10);
    
    return 0;
}