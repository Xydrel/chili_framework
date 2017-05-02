#pragma once
/* Core Facility Macro defines */

#define ENABLED		1
#define DISABLED	0

/* Only want to have testing facility avil while in a debug configuration */
#ifdef _DEBUG
#define CTSW_TEST_FACILITY_ENABLED ENABLED
#else
#define CTSW_TEST_FACILITY_ENABLED DISABLED
#endif

#ifdef _DEBUG
#define CTSW_DEBUG_FACILITY_ENABLED ENABLED
#else
#define CTSW_DEBUG_FACILITY_ENABLED DISABLED
#endif