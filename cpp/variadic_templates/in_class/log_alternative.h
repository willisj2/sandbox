#ifndef _LOG_ALTERNATIVE_H_
#define _LOG_ALTERNATIVE_H_


#include<string>
#include<sstream>
#include<stdio.h>
#include "log_interface.h"

class LogAlternative : public LogInterface<LogAlternative>
{
public:
	template <typename... T>
	void log(const char* fmt, const T&... args)
	{
		std::stringstream ss;
		ss << "Alternative LOG: " << fmt << "\n";
		printf(ss.str().c_str(), args...);
	}
};

#endif /* _LOG_ALTERNATIVE_H_ */

