# ifndef _CLASSSAMPLE_HH_
# define _CLASSSAMPLE_HH_

#include <array>

// クラス宣言
class Gate
{
	public:
        	void set(int, int);
        	std::array<int, 3> get();
		void and_gate(std::array<int, 3>);
		void or_gate(std::array<int, 3>);

    	private:
		std::array<int, 3> m_num;
};

# endif //_CLASSSAMPLE_HH_

