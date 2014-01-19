#ifndef CHAT_SERVER_H
#define CHAT_SERVER_H

#include <boost/asio.hpp>

#include "chat_room.hpp"

class chat_server {
	boost::asio::ip::tcp::acceptor acceptor_;
	boost::asio::ip::tcp::socket socket_;
	chat_room room_;

	void do_accept();

public:
	chat_server(boost::asio::io_service& io_service,
			const boost::asio::ip::tcp::endpoint& endpoint);
};

#endif // CHAT_SERVER_H
