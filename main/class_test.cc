# include <iostream>
# include "../include/classsample.hh"
     
using namespace std;
     
int main()
{
        Gate obj;
        int a, b;
	std::array<int, 3> num;
         
        cout << "aに整数を入力して下さい:" << endl;
        cin >> a;
	cout << "bに整数を入力して下さい:" << endl;
        cin >> b;

	obj.set(a,b);
        num = obj.get();

	for (int v : obj.get())
	{
    		std::cout << v << " ";
	}

	std::cout << std::endl;

	obj.and_gate(num);

	for (int v : obj.get())
        {
                std::cout << v << " ";
        }

        std::cout << std::endl;


        return 0;
}

