/**************************************************************************************************************************************
  RingBuffer.h - Dead simple web-server.
  For RTL8720DN, RTL8722DM and RTM8722CSM WiFi shields

  WiFiWebServer_RTL8720 is a library for the RTL8720DN, RTL8722DM and RTM8722CSM WiFi shields to run WebServer

  Built by Khoi Hoang https://github.com/khoih-prog/WiFiWebServer_RTL8720
  Licensed under MIT license

  Version: 1.0.0

  Version Modified By   Date      Comments
  ------- -----------  ---------- -----------
  1.0.0   K Hoang      14/07/2021 Initial coding for Realtek RTL8720DN, RTL8722DM and RTM8722CSM
 ***************************************************************************************************************************************/

#pragma once

class WiFi_RingBuffer
{
  public:
    WiFi_RingBuffer(unsigned int size);
    ~WiFi_RingBuffer();

    void reset();
    void init();
    void push(char c);
    int getPos();
    bool endsWith(const char* str);
    void getStr(char * destination, unsigned int skipChars);
    void getStrN(char * destination, unsigned int skipChars, unsigned int num);


  private:

    unsigned int _size;
    char* ringBuf;
    char* ringBufEnd;
    char* ringBufP;
};

