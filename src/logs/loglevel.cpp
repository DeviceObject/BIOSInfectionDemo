#include "LogLevel.hpp"

char const * logLevelAsString(LogLevel logPriorityLevel)
{
   switch (logPriorityLevel) {
       case INFO:
           return "INFO";
       case DEBUG:
           return "DEBUG";
       case ERROR:
           return "ERROR";
   }
   return "ERROR";//never here
}
