#include "csapp.h"

int main()
{
    int fd1, fd2;

    fd1 = open("../foo.txt", O_RDONLY, 0);
    printf("fd1 = %d\n", fd1);
    close(fd1);
    fd2 = open("../baz.txt", O_RDONLY, 0);
    printf("fd2 = %d\n", fd2);
    exit(0);
}
/**
 * Unix 进程生命周期开始时，打开的描述符赋给了 stdin（描述符 0）、stdout（描述符 1）和 stderr（描述符 2）。
 * open 函数总是返回最低的未打开的描述符，所以第一次调用。pen 会返回描述符 3。
 * 调用 close 函数会释放描述符 3。最后对 open 的调用会返回描述符 3，
 * 因此程序的输出是 “fd2=3”。
 */
