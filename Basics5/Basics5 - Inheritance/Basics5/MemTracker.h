#ifndef MEM_TRACKER_H
#define MEM_TRACKER_H

// Comment out this line to turn off memory tracking
// I will be grading with this setting on
#define _USE_TRACE_NEW

#if defined(_DEBUG) && defined(_USE_TRACE_NEW)
#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h>  
#define new new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#endif



#ifdef _USE_TRACE_NEW

#define MEM_TRACKER_END		_CrtDumpMemoryLeaks();
#define MEM_TRACKER_START 

#else

#define MEM_TRACKER_START
#define MEM_TRACKER_END


#endif


#endif
