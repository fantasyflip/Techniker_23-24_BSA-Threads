#include <stdio.h>
#include <windows.h>

DWORD WINAPI ThreadFunc(void* data){
    // Hier kommt Code für den Thread
    return 0;
}

int main()
{
    // Thread erzeugen mit CreateThread

    HANDLE threadhandle = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);
    if(threadhandle){
        // Wenn die Threaderzeugung erfolgreich war, warte auf Beendigung des Threads
        WaitForSingleObject(threadhandle, INFINITE);
    }
}
