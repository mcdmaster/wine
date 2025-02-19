/*
 * String definitions
 *
 * Derived from the mingw header written by Colin Peters.
 * Modified for Wine use by Jon Griffiths and Francois Gouget.
 * This file is in the public domain.
 */
#ifndef __WINE_STRING_H
#define __WINE_STRING_H

#include <corecrt_malloc.h>
#include <corecrt_wstring.h>

#ifndef _NLSCMP_DEFINED
#define _NLSCMPERROR               ((unsigned int)0x7fffffff)
#define _NLSCMP_DEFINED
#endif

#ifdef __cplusplus
extern "C" {
#endif

_ACRTIMP size_t __cdecl __strncnt(const char*,size_t);
_ACRTIMP int   __cdecl _strcmpi(const char*,const char*);
_ACRTIMP int   __cdecl _strcoll_l(const char*, const char*, _locale_t);
_ACRTIMP char* __cdecl _strdup(const char*) __WINE_DEALLOC(free) __WINE_MALLOC;
_ACRTIMP char* __cdecl _strerror(const char*);
_ACRTIMP errno_t __cdecl strerror_s(char*,size_t,int);
_ACRTIMP int   __cdecl _stricmp(const char*,const char*);
_ACRTIMP int   __cdecl _stricoll(const char*,const char*);
_ACRTIMP int   __cdecl _stricoll_l(const char*, const char*, _locale_t);
_ACRTIMP char* __cdecl _strlwr(char*);
_ACRTIMP errno_t __cdecl _strlwr_s(char*,size_t);
_ACRTIMP int   __cdecl _strncoll(const char*, const char*, size_t);
_ACRTIMP int   __cdecl _strncoll_l(const char*, const char*, size_t, _locale_t);
_ACRTIMP int   __cdecl _strnicmp(const char*,const char*,size_t);
_ACRTIMP int   __cdecl _strnicmp_l(const char*, const char*, size_t, _locale_t);
_ACRTIMP int   __cdecl _strnicoll(const char*, const char*, size_t);
_ACRTIMP int   __cdecl _strnicoll_l(const char*, const char*, size_t, _locale_t);
_ACRTIMP char* __cdecl _strnset(char*,int,size_t);
_ACRTIMP char* __cdecl _strrev(char*);
_ACRTIMP char* __cdecl _strset(char*,int);
_ACRTIMP char* __cdecl _strupr(char*);
_ACRTIMP errno_t __cdecl _strupr_s(char *, size_t);
_ACRTIMP size_t  __cdecl _strxfrm_l(char*,const char*,size_t,_locale_t);

_ACRTIMP errno_t __cdecl memmove_s(void*,size_t,const void*,size_t);
_ACRTIMP char*   __cdecl strcat(char*,const char*);
_ACRTIMP errno_t __cdecl strcat_s(char*,size_t,const char*);
_ACRTIMP char*   __cdecl strchr(const char*,int);
_ACRTIMP int     __cdecl strcmp(const char*,const char*);
_ACRTIMP int     __cdecl strcoll(const char*,const char*);
_ACRTIMP char*   __cdecl strcpy(char*,const char*);
_ACRTIMP errno_t __cdecl strcpy_s(char*,size_t,const char*);
_ACRTIMP size_t  __cdecl strcspn(const char*,const char*);
_ACRTIMP char*   __cdecl strerror(int);
_ACRTIMP size_t  __cdecl strlen(const char*);
_ACRTIMP char*   __cdecl strncat(char*,const char*,size_t);
_ACRTIMP errno_t __cdecl strncat_s(char*,size_t,const char*,size_t);
_ACRTIMP int     __cdecl strncmp(const char*,const char*,size_t);
_ACRTIMP char*   __cdecl strncpy(char*,const char*,size_t);
_ACRTIMP errno_t __cdecl strncpy_s(char*,size_t,const char*,size_t);
_ACRTIMP size_t  __cdecl strnlen(const char*,size_t);
_ACRTIMP char*   __cdecl strpbrk(const char*,const char*);
_ACRTIMP char*   __cdecl strrchr(const char*,int);
_ACRTIMP size_t  __cdecl strspn(const char*,const char*);
_ACRTIMP char*   __cdecl strstr(const char*,const char*);
_ACRTIMP char*   __cdecl strtok(char*,const char*);
_ACRTIMP char*   __cdecl strtok_s(char*,const char*,char**);
_ACRTIMP size_t  __cdecl strxfrm(char*,const char*,size_t);

#ifdef __cplusplus
}
#endif


#define strcasecmp(s1, s2) _stricmp(s1, s2)
#define strcmpi(s1, s2) _strcmpi(s1, s2)
#define strdup(buf) _strdup(buf)
#define stricmp(s1, s2) _stricmp(s1, s2)
#define stricoll(s1, s2) _stricoll(s1, s2)
#define strlwr(str) _strlwr(str)
#define strncasecmp(str1, str2, sizn) _strnicmp(str1, str2, n)
#define strnicmp(s1, s2, n) _strnicmp(s1, s2, n)
#define strnset(str, value, len) _strnset(str, value, len)
#define strrev(str) _strrev(str)
#define strset(str, value) _strset(str, value)
#define strupr(str) _strupr(str)

#define wcsdup(str) _wcsdup(str)
#define wcsicoll(str1, str2) _wcsicoll(str1, str2)
#define wcslwr(str) _wcslwr(str)
#define wcsicmp(s1, s2) _wcsicmp(s1, s2)
#define wcsnicmp(str1, str2, n) _wcsnicmp(str1, str2, n)
#define wcsnset(str, c, n) _wcsnset(str, c, n)
#define wcsrev(str) _wcsrev(str)
#define wcsset(str, c) _wcsset(str, c)
#define wcsupr(str) _wcsupr(str)

#endif /* __WINE_STRING_H */
