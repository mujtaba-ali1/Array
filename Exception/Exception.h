#pragma once
#include <iostream>
#include <ostream>

class Exception
{
public:
	Exception();
	~Exception();
	Exception(const Exception& other);
	Exception(char* msgIn);
	void setMessage(char* msgSet);
	void setMessage(std::string msgSet);
	char* getMessage() const;
	Exception& operator=(const Exception& other);
	friend std::ostream& operator<<(std::ostream& instream, const Exception& other);

private:
	char* m_msg = nullptr;
};

