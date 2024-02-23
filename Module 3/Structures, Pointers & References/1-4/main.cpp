
#include <iostream>
using namespace std;
int main() {

	int selection;
	cout<<"Введите номер задачи (Если не из практической — введите 0)"<<endl;
	cin>>selection;
	
	switch (selection)
	{
	case 0:
		{
		cout<<"Написать программу, в которой инициализируются структура с именем ‘New’ и двумя переменными - ‘age’ и ‘name’. Необходимо задать значения данным переменным в функции int main() и вывести их на консоль."<<endl;
		struct New
		{
			int age;
			string name;
		};
		New mike;
		mike.age = 5;
		mike.name = "mike";
		cout<<mike.age<<"\t"<<mike.name;
		break;
		}

	case 1:
		{
		cout<<"Написать программу, в которой инициализируются структура с именем ‘New’ и двумя переменными - ‘age’ и ‘name’. Необходимо задать значения данным переменным в функции int main() и вывести их на консоль."<<endl;
		struct New
		{
			int age;
			string name;
		};
		New mike;
		mike.age = 5;
		mike.name = "mike";
		cout<<mike.age<<"\t"<<mike.name;
		break;
		}

	case 2:
		{
		cout<<"Написать программу, в которой инициализируются структура с именем ‘Next’ и тремя переменными - ‘first’, ‘second’ и ‘third’. Необходимо задать произвольные значения данным переменным в функции int main() и вывести их на консоль."<<endl;
		struct Next
		{
			int first = 1;
			int second = 2;
			int third = 3;
		};

		Next example; 
		example.first = 1;
		example.second = 2;
		example.third = 3;
		cout<<example.first<<"\t"<<example.second<<"\t"<<example.third;
		break;
		}

	case 3:
		{
		cout<<"Написать программу, в которой инициализируются структура с именем ‘Next’ и тремя переменными: ‘name’ с типом данных string и ‘salary_1’, ‘salary_2’ с типом данных int. Необходимо задать произвольные значения данным переменным в функции int main() и вывести их на консоль."<<endl;
		struct Next
		{
			string name;
			int salary_1;
			int salary_2;
		};

		Next example; 
		example.name="noname";
		example.salary_1 = 500;
		example.salary_2 = 1000;
		cout<<example.name<<"\t"<<example.salary_1<<"\t"<<example.salary_2;
		break;
		}

	case 4:
		{
		cout<<"Написать программу, в которой инициализируются структура с именем ‘Next’, объединение и переменная ‘age’ с типом данных int. Значение данной переменной задается в функции int main(). Необходимо ввести произвольное значение в данную переменную и вывести его на консоль."<<endl;
		struct Next
		{
			union
			{
				int age;
			};
		};
		Next example;
		example.age=10;
		cout<<example.age;
		break;
		}

	case 5:
		{
		cout<<"Написать программу, в которой инициализируются структура с именем ‘Next’, объединение и переменная ‘w’ с типом данных int. Значение данной переменной задается в функции int main(). Необходимо ввести произвольное значение в данную переменную и вывести его на консоль."<<endl;
		struct Next
		{
			union
			{
				int w;
			};
		};
		Next example;
		example.w=10;
		cout<<example.w;
		break;
		}

	default:
		break;
	}
}