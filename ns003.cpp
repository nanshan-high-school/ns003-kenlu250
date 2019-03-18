#include <iostream>
#include <stack>
using namespace std;

int main() {
  string word;
  stack<int> num;
  int total;

  cin >> word;

  for(int i = 0; i < word.size(); i++){
    int first, second;

    if (word[i] >= '0' && word[i] <='9'){
      word[i] -= '0';
      num.push(word[i]);
    }

    if (word[i] == '+'){
      total = 0; //歸零
      first = num.top(); //把最後數字取出
      num.pop();
      second = num.top(); //把倒數第二個數字取出
      num.pop();
      total += first + second; //相加
      num.push(total);
    }

    else if (word[i] == '-'){
      total = 0; //歸零
      first = num.top(); //把最後數字取出
      num.pop();
      second = num.top(); //把倒數第二個數字取出
      num.pop();
      total += second - first; //相減
      num.push(total);
    }

    else if (word[i] == '*'){
      total = 0; //歸零
      first = num.top(); //把最後數字取出
      num.pop();
      second = num.top(); //把倒數第二個數字取出
      num.pop();
      total += first * second; //相乘
      num.push(total);
    }

    else if (word[i] == '/'){
      total = 0; //歸零
      first = num.top(); //把最後數字取出
      num.pop();
      second = num.top(); //把倒數第二個數字取出
      num.pop();
      total += second / first; //相除
      num.push(total);
    }
  }
  cout << num.top();
}
