#ifndef CHAT_MESSAGE_HPP
#define CHAT_MESSAGE_HPP

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>

class chat_message {
public:
	enum {
		header_length = 4
	};
	enum {
		max_body_length = 512
	};

	chat_message();
	const char* data() const;
	char* data();
	std::size_t length() const;
	const char* body() const;
	char* body();
	std::size_t body_length() const;
	void body_length(std::size_t new_length);
	bool decode_header();
	void encode_header();

private:
	char data_[header_length + max_body_length];
	std::size_t body_length_;
};

typedef std::deque<chat_message> chat_message_queue;

#endif // CHAT_MESSAGE_HPP
