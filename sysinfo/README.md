g++ sysinfo.cpp -o sysinfo

docker build . -t sysinfo

docker run sysinfo
