
// 1. 必须要安装编译器，才能将代码文件(.cpp等)编译为计算器可以执行的文件；
// 每个平台(windows: msvc; mac: clang; linux：gcc)的编译器都不一样，也有一些跨平台的编译器(gcc, clang)
// 如果你当前代码用了别的三方库，那么需要注意：
//      如果别的三方库是c++，那么当前代码必须要和三方库使用的编译器一致（还会涉及编译器版本，编译位数(32, 64), 编译cpu结构（arm64、x86_64等等））才能正常编译；
//      如果别的三方库是c，那么当前代码用任何编译器都可以
// 2. 如果要调试代码（一般绝对是都需要调试的），还需要安装调试器(每个编译器都对应有一个调试器)
// 3. windows需要安装msvc编译器
//      只下载编译器
int main(int argc, char** argv)
{
    int a = 0;
    return 0;
}