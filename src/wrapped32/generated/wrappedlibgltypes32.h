/******************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.1.1) *
 ******************************************************************/
#ifndef __wrappedlibglTYPES32_H_
#define __wrappedlibglTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFi_t)(int32_t);
typedef void* (*pFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);
typedef int32_t (*iFpp_t)(void*, void*);
typedef void (*vFipp_t)(int32_t, void*, void*);
typedef void (*vFppp_t)(void*, void*, void*);
typedef void (*vFXpi_t)(void*, void*, int32_t);
typedef void (*vFuipp_t)(uint32_t, int32_t, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(glXSwapIntervalMESA, iFi_t) \
	GO(glGetVkProcAddrNV, pFp_t) \
	GO(glXGetProcAddress, pFp_t) \
	GO(glXGetProcAddressARB, pFp_t) \
	GO(glDebugMessageCallback, vFpp_t) \
	GO(glDebugMessageCallbackAMD, vFpp_t) \
	GO(glDebugMessageCallbackARB, vFpp_t) \
	GO(glDebugMessageCallbackKHR, vFpp_t) \
	GO(eglDebugMessageControlKHR, iFpp_t) \
	GO(glProgramCallbackMESA, vFipp_t) \
	GO(eglSetBlobCacheFuncsANDROID, vFppp_t) \
	GO(glXSwapIntervalEXT, vFXpi_t) \
	GO(glShaderSource, vFuipp_t)

#endif // __wrappedlibglTYPES32_H_
