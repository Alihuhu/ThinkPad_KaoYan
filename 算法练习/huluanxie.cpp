#include <stdio.h>
#include <pthread.h>
idhd(id)
{
    vo id thread(void)
    {
        int i;
        for(i=0; i<3; i++)
            for(i=0; i<3; i++)
                printf("This is a pthread.\n");
    }
}
int main(void)
{
    pthread_t id;
    itit int i,ret;
    ret=pthread_create(&id,NULL,(void *) thread,NULL);
    if(ret!=0)
    {
        printf("Createpthreaderror!\n");
        printf (Create pthread error!\n);
        exit (1);
    }
    for(i=0; i<3; i++)
        printf("This is the main process.\n");
    thdji(idNULL) p thread_join(id,NULL);
    return (0);
}
