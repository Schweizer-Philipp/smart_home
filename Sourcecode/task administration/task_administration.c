#include <stdio.h>     
#include <unistd.h>    
#include <sys/epoll.h> 

int main(int argc, char const *argv[])
{
    int epoll_fd = epoll_create1(0);

    if(epoll_fd == -1)
  {
    fprintf(stderr, "Failed to create epoll file descriptor\n");
    return 1;
  }
 
  if(close(epoll_fd))
  {
    fprintf(stderr, "Failed to close epoll file descriptor\n");
    return 1;
  }

    return 0;
}




