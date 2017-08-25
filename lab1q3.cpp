    #include <iostream>
   
    using namespace std; 
        int main() {
    	float a, b, c;   //where is the problem
    	char d;
    	cout << "enter two numbers\n";
    	cin >> a >> b ;
     
    	cout << "enter the operation to be performed\n";
    	cin >> d;
    	switch (d){
    		case '+':
    		cout << a+b;
    		break;
    		case '-':
    		cout << a-b;
    		break;
    		case '*':
    		cout << a*b;
    		break;
    		case '/':
    		cout << a/b;
    		break;
    	}
     
    	return 0;
    }
