// Simple ANSI color codes for terminal output (C++98 compatible)
// Toggle with -DUSE_COLOR or #define USE_COLOR before including

#ifndef COLORS_HPP
#define COLORS_HPP

#ifdef USE_COLOR
# define CL_RESET   "\033[0m"
# define CL_BOLD    "\033[1m"
# define CL_DIM     "\033[2m"
# define CL_RED     "\033[31m"
# define CL_GREEN   "\033[32m"
# define CL_YELLOW  "\033[33m"
# define CL_BLUE    "\033[34m"
# define CL_MAGENTA "\033[35m"
# define CL_CYAN    "\033[36m"
# define CL_WHITE   "\033[37m"
#else
# define CL_RESET   ""
# define CL_BOLD    ""
# define CL_DIM     ""
# define CL_RED     ""
# define CL_GREEN   ""
# define CL_YELLOW  ""
# define CL_BLUE    ""
# define CL_MAGENTA ""
# define CL_CYAN    ""
# define CL_WHITE   ""
#endif

#endif // COLORS_HPP
