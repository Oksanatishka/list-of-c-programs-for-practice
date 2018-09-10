/*
* C Program to Get IP Address
* This program displays the IP address of the system.
*
* Solution
* 1. Create a socket to define network interface IPv4 using statement socket(AF_INET, SOCK_DGRAM, 0) and store it in the variable n.
* 2. Define the IPv4 address type by assigning AF_INET to (ifr.ifr_addr.sa_family).
* 3. Define the port name where network is attached using statement strncpy(ifr.ifr_name , array , IFNAMSIZ – 1), where array is initialized with string “etho”.
* 4. Call the ioctl function to access the network interface information by passing the address.
* 5. Close the variable n.
* 6. Use this (inet_ntoa(( (struct sockaddr_in *)&ifr.ifr_addr )->sin_addr)) to extract the IP address and print the same as output.
*/

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <unistd.h>
#include <arpa/inet.h>

int main()
{
    int n;
    struct ifreq ifr;
    char array[] = "eth0";

    n = socket(AF_INET, SOCK_DGRAM, 0);
    //Type of address to retrieve - IPv4 IP address
    ifr.ifr_addr.sa_family = AF_INET;
    //Copy the interface name in the ifreq structure
    strncpy(ifr.ifr_name, array, IFNAMSIZ - 1);
    ioctl(n, SIOCGIFADDR, &ifr);
    close(n);
    //display result
    printf("IP Address is %s - %s\n", array, inet_ntoa(((struct sockaddr_in *)&ifr.ifr_addr)->sin_addr));
    return 0;
}