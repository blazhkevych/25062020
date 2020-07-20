//шаблон класу стек
#include <iostream>
using namespace std;
const int N = 10;
template <class T = int, int N = 10>
class Stack
{
	T mas[N];
	int itop;
public:
	Stack() // конструктор за замовчуваням
	{
		itop = 0;
	}
	void Push(T a, int n); // покласти
	void Pop(); // видаляє
	T Top(); // переглянути
	bool Empty();
	static int K;
};

template<class T, int N>
void Stack<T, N>::Push(T a, int n)
{
	if (itop == N)
	{
		cout << "Stack is full" << endl;
		return;
	}
	mas[itop++] = a;
}
template<class T, int N>
void Stack<T, N>::Pop()
{
	if (itop > 0)
		itop--;
}

template<class T, int N>
T Stack<T, N>::Top()
{
	if (itop > 0) return mas[itop - 1];
	else
		throw "stack is empty\n"; // оператор генерує виняткову ситуацію
}

template<class T, int N>
bool Stack<T, N>::Empty()
{
	return itop == 0;
}

template<class T, int N>
int Stack <T, N>::K = 10;

int main()
{
	//cout << "//int" << endl;
	//Stack <int, N > INT;
	//for (int i = 0; i < N; i++)
	//	INT.Push(i * 10, N);
	//for (int i = 0; i < N; i++) {
	//	cout << INT.Top() << '\t';
	//	INT.Pop();
	//}
	///*cout << "//int( inshuy vuvid)" << endl;
	//Stack <int> INT;
	//for (int i = 0; i < N; i++)
	//	INT.Push(i * 10);
	//While(!INT.Empty()) {
	//	cout << INT.Top() << '\t';
	//	INT.Pop();
	//}*/
	//cout << "//double" << endl;
	//Stack <double, N> DOUBLE;
	//for (int i = 0; i < N; i++)
	//	DOUBLE.Push(i * 10, N);
	//for (int i = 0; i < N; i++) {
	//	cout << DOUBLE.Top() << '\t';
	//	DOUBLE.Pop();
	//}
	//cout << "//text" << endl;
	//Stack <const char*, N> TEXT;
	//for (int i = 0; i < N; i++)
	//	TEXT.Push("Piter", N);
	//for (int i = 0; i < N; i++) {
	//	cout << TEXT.Top() << '\t';
	//	TEXT.Pop();
	//}
	//
	//////////////////////
	cout << "////////////////" << endl;
	Stack <int, 5 > INT;
	Stack <double > DOUBLE;
	Stack < > NS;
	Stack <int, 5 > INT2;
	cout << INT.K << endl;
	cout << DOUBLE.K << endl;
	cout << NS.K << endl;
	cout << "INT2.K = 20" << endl;
	INT2.K = 20;
	cout << INT2.K << endl;
	cout << DOUBLE.K << endl;
	cout << NS.K << endl;

}