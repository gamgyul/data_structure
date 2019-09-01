#include "InfixToPostfix.h"
#include "PostCaculator.h"
int main(){
    std::string s;
    int num;
    s = ConvToRPNExp("1*(2+3)*4");
    std::cout << "result :" << s << std::endl;
    num = EvalRPNExp(s);
    std::cout << "result :" << num << std::endl;
    return 0;
}