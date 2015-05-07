#ifndef __Tools_h__
#define __Tools_h__

#include "MultiSys.h"
#include <string>
using namespace std;

namespace tools {
    inline std::string GetCurrentTimeString(const char * format = "%4d-%02d-%02d %02d:%02d:%02d") {
#ifdef WIN32
        char strtime[64] = {0};
        SYSTEMTIME time;
        GetLocalTime(&time);
        SafeSprintf(strtime, sizeof(strtime), format, 
            time.wYear, time.wMonth, time.wDay, time.wHour, time.wMinute, time.wSecond);
        return strtime;
#elif defined linux

#endif //linux
    }

#ifdef __cplusplus
    extern "C" {
#endif
        inline void SafeMemcpy(void *__restrict __dest, size_t __max, const void *__restrict __src, size_t __n) {
            TASSERT(__n <= __max, "over flow");
            memcpy(__dest, __src, (__max>=__n)?(__n):(__max));
        }

        inline void SafeMemset(void *__restrict __dest, size_t __max, int val, size_t __n) {
            TASSERT(__n <= __max, "over flow");
            memset(__dest, val, (__max>=__n)?(__n):(__max));
        }

        inline ThreadID GetCurrentThreadID() {
#ifdef _WIN32
            return ::GetCurrentThreadId();
#elif defined  linux
            return pthread_self();
#endif //linux
        }

        inline const char * GetAppPath() {
            static char * pStrPath = NULL;

            if (NULL == pStrPath) {
                pStrPath = NEW char[256];
                char link[256];
                memset(link, 0, 256);
                memset(pStrPath, 0, 256);

#ifdef WIN32
                GetModuleFileName(NULL, pStrPath, 256);
                PathRemoveFileSpec(pStrPath);
#elif defined linux
                //SafeSprintf(link, sizeof(link), "/proc/self/exe", getpid());
                SafeSprintf(link, sizeof (link), "/proc/self/exe");

                int nCount = readlink(link, pStrPath, 256);
                if (nCount >= 265) {
                    TASSERT(false, "system path error");
                }
                //pStrPath[nCount] = 0;
                pStrPath = dirname(pStrPath);
#endif //linux
            }

            return pStrPath;
        }

        inline s64 GetTimeMillisecond() {
#ifdef WIN32    
            SYSTEMTIME wtm;
            GetLocalTime(&wtm);
            struct tm tTm;
            tTm.tm_year     = wtm.wYear - 1900;
            tTm.tm_mon      = wtm.wMonth;
            tTm.tm_mday     = wtm.wDay;
            tTm.tm_hour     = wtm.wHour;
            tTm.tm_min      = wtm.wMinute;
            tTm.tm_sec      = wtm.wSecond;
            tTm.tm_isdst    = -1;
            return (s64)mktime(&tTm) * 1000 + (s64)wtm.wMilliseconds;
#elif defined linux
            struct timeval tv;
            gettimeofday(&tv, NULL);
            return tv.tv_sec * 1000 + tv.tv_usec/1000;
#endif //linux
        }

#ifdef __cplusplus
    }
#endif

    inline string IntAsString(const s32 value) {
        char str[128] = {0};
        SafeSprintf(str, sizeof(str), "%d", value);
        return string(str);
    }

    inline s32 StringAsInt(const char * value) {
        TASSERT(value, "null point");
        return atoi(value);
    }

    inline string Int64AsString(s64 value) {
        char str[128] = {0};
        SafeSprintf(str, sizeof(str), "%ld", value);
        return string(str);
    }
}

#endif //__Tools_h__