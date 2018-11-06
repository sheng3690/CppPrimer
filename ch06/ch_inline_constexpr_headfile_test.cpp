#include"ch_inline_constexpr_headfile_1.h"
//#include"ch_inline_constexpr_headfile_2.h"
inline void inline_fun()
 {
 std::cout << "inline_fun_1" << std::endl;
}
int main() {
	general_fun();
	inline_fun();
	system("pause");
	return 0;
}