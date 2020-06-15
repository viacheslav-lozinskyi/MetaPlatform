//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#define MP_PIPE_CLIENT                                                         ::System::IO::Pipes::NamedPipeClientStream^
#define MP_PIPE_CLIENT_INITIALIZE(CONTEXT, NAME, DIRECTION)                    (CONTEXT) = gcnew ::System::IO::Pipes::NamedPipeClientStream(".", NAME, DIRECTION)
#define MP_PIPE_CLIENT_FINALIZE(CONTEXT)                                       (CONTEXT)->Close()
#define MP_PIPE_CLIENT_CONNECT(CONTEXT, TIMEOUT)                               (CONTEXT)->Connect(TIMEOUT)
#define MP_PIPE_CLIENT_CONNECTED(CONTEXT)                                      (CONTEXT)->IsConnected
#define MP_PIPE_CLIENT_SEND(CONTEXT, BUFFER, POSITION, SIZE)                   (CONTEXT)->Write(BUFFER, POSITION, SIZE)
#define MP_PIPE_CLIENT_RECEIVE(CONTEXT, BUFFER, POSITION, SIZE)                (CONTEXT)->Read(BUFFER, POSITION, SIZE)

#define MP_PIPE_SERVER                                                         ::System::IO::Pipes::NamedPipeServerStream^
#define MP_PIPE_SERVER_INITIALIZE(CONTEXT, NAME, DIRECTION, CLIENT_COUNT)      (CONTEXT) = gcnew ::System::IO::Pipes::NamedPipeServerStream(NAME, DIRECTION, CLIENT_COUNT)
#define MP_PIPE_SERVER_FINALIZE(CONTEXT)                                       (CONTEXT)->Close()
#define MP_PIPE_SERVER_WAIT(CONTEXT)                                           (CONTEXT)->WaitForConnection()
#define MP_PIPE_SERVER_CONNECTED(CONTEXT)                                      (CONTEXT)->IsConnected
#define MP_PIPE_SERVER_SEND(CONTEXT, BUFFER, POSITION, SIZE)                   (CONTEXT)->Write(BUFFER, POSITION, SIZE)
#define MP_PIPE_SERVER_RECEIVE(CONTEXT, BUFFER, POSITION, SIZE)                (CONTEXT)->Read(BUFFER, POSITION, SIZE)

#define MP_PIPE_BUFFER                                                         array<unsigned char>^
#define MP_PIPE_BUFFER_INITIALIZE(CONTEXT, SIZE)                               (CONTEXT) = gcnew array<unsigned char>(SIZE)
#define MP_PIPE_BUFFER_FINALIZE(CONTEXT)
#define MP_PIPE_BUFFER_SIZE_GET(CONTEXT)                                       (int)(CONTEXT)->Length
#define MP_PIPE_BUFFER_UTF8_GET(CONTEXT, POSITION, SIZE)                       ::System::Text::Encoding::UTF8->GetString(CONTEXT, POSITION, SIZE)
#define MP_PIPE_BUFFER_UTF8_SET(CONTEXT, VALUE)                                CONTEXT = ::System::Text::Encoding::UTF8->GetBytes(VALUE)
#define MP_PIPE_BUFFER_UTF32_GET(CONTEXT, POSITION, SIZE)                      ::System::Text::Encoding::UTF32->GetString(CONTEXT, POSITION, SIZE)
#define MP_PIPE_BUFFER_UTF32_SET(CONTEXT, VALUE)                               CONTEXT = ::System::Text::Encoding::UTF32->GetBytes(VALUE)
#define MP_PIPE_BUFFER_UNOCODE_GET(CONTEXT, POSITION, SIZE)                    ::System::Text::Encoding::Unicode->GetString(CONTEXT, POSITION, SIZE)
#define MP_PIPE_BUFFER_UNOCODE_SET(CONTEXT, VALUE)                             CONTEXT = ::System::Text::Encoding::Unicode->GetBytes(VALUE)

#define MP_PIPE_DIRECTION_IN                                                   ::System::IO::Pipes::PipeDirection::In
#define MP_PIPE_DIRECTION_INOUT                                                ::System::IO::Pipes::PipeDirection::InOut
#define MP_PIPE_DIRECTION_OUT                                                  ::System::IO::Pipes::PipeDirection::Out
