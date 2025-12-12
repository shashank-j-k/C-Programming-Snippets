#include <stdio.h>

int main(int argc, char* argv[], char* envp[])
{
    int iCounter;

    printf("Printing Environment Settings :\n\n");

    for(iCounter = 0; envp[iCounter] != NULL; iCounter ++)
    {
        printf("%s\n", envp[iCounter]);
    }

    return 0;
}

/*
OUTPUT :

Printing Environment Settings :

ALLUSERSPROFILE=C:\ProgramData
APPDATA=C:\Users\Shashank\AppData\Roaming
CHROME_CRASHPAD_PIPE_NAME=\\.\pipe\crashpad_7948_ABVKRBHKFFCUQOPL
CommonProgramFiles=C:\Program Files (x86)\Common Files
CommonProgramFiles(x86)=C:\Program Files (x86)\Common Files
CommonProgramW6432=C:\Program Files\Common Files
COMPUTERNAME=DESKTOP-1B8UERB
ComSpec=C:\WINDOWS\system32\cmd.exe
DriverData=C:\Windows\System32\Drivers\DriverData
HOMEDRIVE=C:
HOMEPATH=\Users\Shashank
LOCALAPPDATA=C:\Users\Shashank\AppData\Local
LOGONSERVER=\\DESKTOP-1B8UERB
NUMBER_OF_PROCESSORS=4
OneDrive=C:\Users\Shashank\OneDrive
OneDriveConsumer=C:\Users\Shashank\OneDrive
ORIGINAL_XDG_CURRENT_DESKTOP=undefined
OS=Windows_NT
Path=C:\Program Files\Common Files\Oracle\Java\javapath;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files (x86)\AMD\ATI.ACE\Core-Static;C:\Users\Shashank\AppData\Local\Microsoft\WindowsApps;C:\adb;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\WINDOWS\System32\OpenSSH\;C:\MinGW\bin;C:\Program Files (x86)\Microsoft SQL Server\100\Tools\Binn\;C:\Program Files\Microsoft SQL Server\100\Tools\Binn\;C:\Program Files\Microsoft SQL Server\100\DTS\Binn\;C:\Program Files\dotnet\;C:\Users\Shashank\AppData\Local\Programs\Python\Python312\Scripts\;C:\Users\Shashank\AppData\Local\Programs\Python\Python312\;C:\Users\Shashank\AppData\Local\Microsoft\WindowsApps;C:\Users\Shashank\AppData\Local\Programs\Microsoft VS Code\bin        
PATHEXT=.COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.MSC;.CPL
PROCESSOR_ARCHITECTURE=x86
PROCESSOR_ARCHITEW6432=AMD64
PROCESSOR_IDENTIFIER=Intel64 Family 6 Model 78 Stepping 3, GenuineIntel      
PROCESSOR_LEVEL=6
PROCESSOR_REVISION=4e03
ProgramData=C:\ProgramData
ProgramFiles=C:\Program Files (x86)
ProgramFiles(x86)=C:\Program Files (x86)
ProgramW6432=C:\Program Files
PSModulePath=C:\Users\Shashank\Documents\WindowsPowerShell\Modules;C:\Program Files\WindowsPowerShell\Modules;C:\WINDOWS\system32\WindowsPowerShell\v1.0\Modules
PUBLIC=C:\Users\Public
SESSIONNAME=Console
SystemDrive=C:
SystemRoot=C:\WINDOWS
TEMP=C:\Users\Shashank\AppData\Local\Temp
TMP=C:\Users\Shashank\AppData\Local\Temp
USERDOMAIN=DESKTOP-1B8UERB
USERDOMAIN_ROAMINGPROFILE=DESKTOP-1B8UERB
USERNAME=Shashank
USERPROFILE=C:\Users\Shashank
VS100COMNTOOLS=c:\Program Files (x86)\Microsoft Visual Studio 10.0\Common7\Tools\
windir=C:\WINDOWS
TERM_PROGRAM=vscode
TERM_PROGRAM_VERSION=1.102.3
LANG=en_US.UTF-8
COLORTERM=truecolor
VSCODE_INJECTION=1
VSCODE_NONCE=5d181324-45b1-4581-badf-b9c2ca5c92fa
VSCODE_STABLE=1
*/