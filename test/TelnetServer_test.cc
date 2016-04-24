/*
 * TelnetServer_test.cc
 *
 *  Created on: 22 de abr de 2016
 *      Author: lucas
 */
#include <iostream>

#include "gtest/gtest.h"
#include "Telnet/Server/TelnetServer.h"

using ldk::TelnetServer;

#define PORT 1234

TEST(TelnetServer, instantiation)
{
    TelnetServer* telnet_server;
    ASSERT_NO_THROW(telnet_server = new TelnetServer());
    ASSERT_NO_THROW(delete telnet_server);
    //FAIL();
}
