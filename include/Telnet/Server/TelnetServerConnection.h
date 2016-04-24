/*
 * TelnetServerConnection.h
 *
 *  Created on: 22 de abr de 2016
 *      Author: lucas
 */

#ifndef TELNET_SERVER_TELNETSERVERCONNECTION_H_
#define TELNET_SERVER_TELNETSERVERCONNECTION_H_

#include "Types/Socket/SocketTypes.h"

namespace ldk {

class TelnetServerConnection {
public:
    TelnetServerConnection(ldk_socket_t socket);
    ~TelnetServerConnection();
};

} /* namespace ldk */

#endif /* TELNET_SERVER_TELNETSERVERCONNECTION_H_ */
