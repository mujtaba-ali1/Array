#include "Exception.h"

Exception::Exception()
{
	if (m_msg == nullptr) {
		m_msg = new char[8];
	}
	strcpy_s(m_msg, 8, "Default");
}

Exception::~Exception()
{
	delete[] m_msg;

}

Exception::Exception(const Exception& other)
{
	setMessage(other.getMessage());
}

Exception::Exception(char* msgIn)
{
	setMessage(msgIn);
}

void Exception::setMessage(char* msgSet)
{
	int size = strlen(msgSet) + 1;
	if (m_msg == nullptr) {
		m_msg = new char[size+1];
	}
	strcpy_s(m_msg, size + 1, msgSet);
}

void Exception::setMessage(std::string msgStr)
{
	if ((m_msg) != nullptr) delete[] m_msg;
	m_msg = new char[msgStr.length() + 1];
	for (size_t i = 0; i < msgStr.length(); i++) {
		m_msg[i] = msgStr[i];
	}
	m_msg[msgStr.length()] = 0;
}

char* Exception::getMessage() const
{
	return m_msg;
}

Exception& Exception::operator=(const Exception& other)
{
	setMessage(other.getMessage());
	return *this;
}

std::ostream& operator<<(std::ostream& instream, const Exception& other)
{
	return instream << other.getMessage();
}
