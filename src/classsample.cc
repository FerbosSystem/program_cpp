#include "../include/classsample.hh"
#include <array>
#include <iostream>

using namespace std;

void Gate::set(int a, int b)
{
	m_num = {a, b, -1};
}
     
std::array<int, 3> Gate::get()
{
	return m_num;
}

void Gate::and_gate(std::array<int, 3> a_arr)
{
	if(a_arr[0]>0&&a_arr[1]>0)
	{
		cout<<"true"<<endl;
		m_num[2] = 1;
	}
	else 
	{
		cout<<"false"<<endl;
		m_num[2] = 0;
	}
}

void Gate::or_gate(std::array<int, 3> m_num)
{
	if(m_num[0]>0||m_num[1]>0) m_num[2] = 1;
	else m_num[2] = 0;
}
