class Solution   // IITS RUNNING CURRETLY
{
public:
	bool isOperand(string x)     // this use to find whre it operand or notn
	{
		if (x == "+" || x == "-" || x == "*" || x == "/")
		{
			return true;
		}
		return false;
	}

	int operation(string op, int x, int y)
	{
		if (op == "+") // operation function use to find kon sa operation use karna
		{	// yaha hum stl ka use karne se bach jaa rahe hainn
			return x + y;
		}
		else if (op == "-")
		{
			return x - y;
		}
		else if (op == "*")
		{
			return x * y;
		}
		else if (op == "/")
		{
			return x / y;
		}
		return -1;
	}

	int evalRPN(vector<string>& a)
	{
		stack<int> stk;
		int n = a.size();
		int x = 0, y = 0, result = 0;
		for (int i = 0; i < n; i++)
		{
			if (!isOperand(a[i]))
			{	// aga operand nahi  hain to push kar to stk
				stk.push(stoi(a[i]));  // after converting iunto the integer  bcz we takr stk of integer type
				// stoi is used to convert string into an integer
			}
			else
			{
				y = stk.top(); //   first two top element ke ler lo fir us par opertion performn kar do
				stk.pop();
				x = stk.top();
				stk.pop();
				result = operation(a[i], x, y);
				stk.push(result);  /// result ko stk me push kar do
			}
		}
		int sol = stk.top();
		stk.pop();
		return sol;
	}
};


// THIS IS MINE SOLUTION KAHI N THORA SA HGALAT HO RAHA HAIIN
// class Solution {
// public:
// 	int operation(int x , int y , string op) {  // yaha operation ke liye
// 		if (op == "+")     // iss function ka use kar ke hum stl ka use karne se bach jayenge
// 			return x + y ;

// 		else if (op == "-")
// 			return x - y ;
// 		else if (op == "*")
// 			return x * y ;
// 		else if(op=="/")
// 			return x / y ;

//         return -1 ;

// 	}
// 	int evalRPN(vector<string>& tokens) {  // simple soach samjh aa  jayega
// 		stack<int> s ;        // do eleement s me push kar do except operation fir un do ko pop kar  do fir
// 		int x = 0 ,  y = 0  , z = 0, n ;
// 		n = tokens.size()  ;

// 		for (int i = 0 ; i < n ; i++) {
// 			if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
// 				s.push(stoi(tokens[i])) ;   // yaha string ko integer me convert kar dya hain
// 			}
// 			else {
// 				x = s.top() ;  // top  ka ke x me dal do
//                 s.pop() ;  // pop kar do
// 				y = s.top() ;
//                 s.pop() ;
// 				z = operation(x , y , tokens[i]) ; // x ,y and ding ko operation se pass kar do

// 				s.push(z) ;  // z ka value s me push kar don
// 			}
// 		}
// 		return s.top() ;

// 	}
// };
