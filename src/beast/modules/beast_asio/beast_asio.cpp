//------------------------------------------------------------------------------
/*
    This file is part of Beast: https://github.com/vinniefalco/Beast
    Copyright 2013, Vinnie Falco <vinnie.falco@gmail.com>

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#include "BeastConfig.h"

#include "system/OpenSSLIncludes.h"

#include "beast_asio.h"

# include "../../beast/http/impl/http_parser.h"

#include "basics/PeerRole.cpp"
#include "basics/SSLContext.cpp"

#include "protocol/HandshakeDetectLogicPROXY.cpp"

# include "http/HTTPParserImpl.h"
#include "http/HTTPClientType.cpp"
#include "http/HTTPField.cpp"
#include "http/HTTPHeaders.cpp"
#include "http/HTTPMessage.cpp"
#include "http/HTTPRequest.cpp"
#include "http/HTTPResponse.cpp"
#include "http/HTTPVersion.cpp"

#include "tests/PeerTest.cpp"
#include "tests/TestPeerBasics.cpp"
#include "tests/TestPeerLogic.cpp"
#include "tests/TestPeerLogicProxyClient.cpp"
#include "tests/TestPeerLogicSyncServer.cpp"
#include "tests/TestPeerLogicSyncClient.cpp"
#include "tests/TestPeerLogicAsyncServer.cpp"
#include "tests/TestPeerLogicAsyncClient.cpp"
#include "tests/TestPeerUnitTests.cpp"

#include "system/BoostUnitTests.cpp"

#include "http/HTTPParser.cpp"
#include "http/HTTPRequestParser.cpp"
#include "http/HTTPResponseParser.cpp"
