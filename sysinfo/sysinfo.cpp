#include <iostream>
#include <sys/utsname.h>
using namespace std;

int main(){
    struct utsname sysinfo;
    uname(&sysinfo);

    cout << "System name: " << sysinfo.sysname << endl;
    cout << "Host Nmae: " << sysinfo.nodename << endl;
    cout << "Release(Kernel) Version: " << sysinfo.release << endl;
    cout << "Kernel Build Timestamp: " << sysinfo.version << endl;
    cout << "Machine Arch: " << sysinfo.machine << endl;
    cout << "Domain Name:" << sysinfo.domainname << endl;

    return 0;

}
