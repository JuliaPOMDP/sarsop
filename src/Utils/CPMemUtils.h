#ifndef CPMEMUTILS_H
#define CPMEMUTILS_H


#ifdef __APPLE__
	#include <sys/types.h>
	#include <sys/sysctl.h>
	# include <mach/task.h>
	# include <mach/mach_init.h>
#else

	#ifdef _WIN32

		#include <windows.h>
		#include <psapi.h>
		#pragma comment(lib,"psapi.lib")

	#else
		//#include <sys/resource.h>
		//#include <sys/sysinfo.h>
		#include <sys/unistd.h>

		#include <stdlib.h>
		#include <stdio.h>
		#include <malloc.h>

	#endif

#endif



#ifdef __cplusplus
extern "C"
#endif
unsigned long getPhysicalMemorySize();

#ifdef __cplusplus
extern "C"
#endif
unsigned long getCurrentProcessMemoryUsage();

#ifdef __cplusplus
extern "C"
#endif
unsigned long getPlatformMemoryLimit();





#endif // CPMEMUTILS_H
