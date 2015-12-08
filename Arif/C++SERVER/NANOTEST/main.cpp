#include <iostream>
#include<nanomsg/pipeline.h>
#include<nanomsg/nn.h>
using namespace std;

int main()
{
int sock;

sock=nn_socket(AF_SP,NN_PUSH);
nn_bind(sock,"tcp://192.168.168.36:8011");
char *buffer="arif";


int sizee=nn_send(sock,buffer,sizeof(buffer),0);
    cout << "Hello world!" << endl;
    return 0;
}
