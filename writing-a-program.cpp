#include "std_lib_facilities.h"

int main()
{
  cout<<"Please enter expression (we can handle + and -)";
  int lval=0; // I chose lval to represent the left value(first int they enter)
  int rval; // rval to be the right value, second one they input
  char op;
  int res;
  cin>>lval>>op>>rval;
  
  if(op=='+')
    res = lval + rval; //addition
  else if(op=='-')
    res = lval - rval; //subtraction
    
  cout<<"Result:"<<res<<'\n';
  keep_window_open();
  return 0;
}

// Above is a small calculator that could only calculate addition and subtraction
// However, testing a VALUE against many constants is best done by a 'switch-statement' rather than an if-statement.

#include "std_lib_facilities.h"

int main()
{
  cout<<"Please enter expression (we can handle +, -, *, /)";
  cout<<"add an x to end expression (e.g., 1+2*3x)";
  int lval = 0;
  int rval;
  cin>>lval; //this reads the left most operand
  if(!cin) error("no first operand");
  for(char op; cin>>op: ) { // this reads the operator and right hand operand
    
    if(op!='x') cin>>rval;
    if(!cin) error("no second operand");
    
    switch(op) {
      case '+':
        lval+=rval; // this is like saying: lval = lval+rval
        break;
      case '-':
        lval-=rval;
        break;
      case '*':
        lval*=rval;
        break;
      case '/':
        lval/=rval;
        break;
      default:
        cout<<"Result"<<lval<<'\n';
        keep_window_open();
        return 0;
    }
  }
  error("bad expression");
}
// This is an alright code, however, it doesn't follow the PEMDAS rule.
// This is where TOKENS comes into play

