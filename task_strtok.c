#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[], char *envp[])
{
    int iCounter;
    char *pszStr = NULL;

    for(iCounter = 0; envp[iCounter] != NULL; iCounter ++)
    {
        pszStr = strtok(envp[iCounter], "=");

        if(strcmp(pszStr, "Path") != 0)
        {
            continue;
        }
        else    
            break;
    }

    pszStr = strtok(NULL, ";");

    while(pszStr != NULL)
    {
        printf("%s\n", pszStr);
        pszStr = strtok(NULL, ";");
    }

    return 0;
}

/*
OUTPUT :

C:\Program Files\Common Files\Oracle\Java\javapath
C:\Windows\system32
C:\Windows
C:\Windows\System32\Wbem
C:\Windows\System32\WindowsPowerShell\v1.0\
C:\Program Files (x86)\AMD\ATI.ACE\Core-Static
C:\Users\Shashank\AppData\Local\Microsoft\WindowsApps
C:\adb
C:\WINDOWS\system32
C:\WINDOWS
C:\WINDOWS\System32\Wbem
C:\WINDOWS\System32\WindowsPowerShell\v1.0\
C:\WINDOWS\System32\OpenSSH\
C:\MinGW\bin
C:\Program Files (x86)\Microsoft SQL Server\100\Tools\Binn\
C:\Program Files\Microsoft SQL Server\100\Tools\Binn\
C:\Program Files\Microsoft SQL Server\100\DTS\Binn\
C:\Program Files\dotnet\
C:\Users\Shashank\AppData\Local\Programs\Python\Python312\Scripts\        
C:\Users\Shashank\AppData\Local\Programs\Python\Python312\
C:\Users\Shashank\AppData\Local\Microsoft\WindowsApps
C:\Users\Shashank\AppData\Local\Programs\Microsoft VS Code\bin
*/