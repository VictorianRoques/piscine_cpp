#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen {

private:

	void debug( void );
	void info ( void );
	void warning( void );
	void error( void );

public:

	enum Level {
		LevelDebug, LevelInfo, LevelWarning, LevelError, LevelWrongInput
	};
	static enum Level resolveLevel(std::string level);
	void complain(std::string level);
};

#endif
