class Solution
{
public:
	int Fibonacci(int n) {
		int a = 0;
		int b = 1;
		int c;
		while (n--)
		{
			c = a + b;
			a = b;
			b = c;
		}
		return a;
	}
};