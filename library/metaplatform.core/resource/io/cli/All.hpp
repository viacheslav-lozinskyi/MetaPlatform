//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#define MP_PIPE_CLIENT                                                             ::System::IO::Pipes::NamedPipeClientStream^
#define MP_PIPE_CLIENT_INITIALIZE(CONTEXT, NAME, DIRECTION)                        (CONTEXT) = gcnew ::System::IO::Pipes::NamedPipeClientStream(".", NAME, DIRECTION)
#define MP_PIPE_CLIENT_FINALIZE(CONTEXT)                                           (CONTEXT)->Close()
#define MP_PIPE_CLIENT_CONNECT(CONTEXT, TIMEOUT)                                   (CONTEXT)->Connect(TIMEOUT)
#define MP_PIPE_CLIENT_CONNECTED(CONTEXT)                                          (CONTEXT)->IsConnected
#define MP_PIPE_CLIENT_SEND(CONTEXT, BUFFER, POSITION, SIZE)                       (CONTEXT)->Write(BUFFER, POSITION, SIZE)
#define MP_PIPE_CLIENT_RECEIVE(CONTEXT, BUFFER, POSITION, SIZE)                    (CONTEXT)->Read(BUFFER, POSITION, SIZE)

#define MP_PIPE_SERVER                                                             ::System::IO::Pipes::NamedPipeServerStream^
#define MP_PIPE_SERVER_INITIALIZE(CONTEXT, NAME, DIRECTION, CLIENT_COUNT)          (CONTEXT) = gcnew ::System::IO::Pipes::NamedPipeServerStream(NAME, DIRECTION, CLIENT_COUNT)
#define MP_PIPE_SERVER_FINALIZE(CONTEXT)                                           (CONTEXT)->Close()
#define MP_PIPE_SERVER_WAIT(CONTEXT)                                               (CONTEXT)->WaitForConnection()
#define MP_PIPE_SERVER_CONNECTED(CONTEXT)                                          (CONTEXT)->IsConnected
#define MP_PIPE_SERVER_SEND(CONTEXT, BUFFER, POSITION, SIZE)                       (CONTEXT)->Write(BUFFER, POSITION, SIZE)
#define MP_PIPE_SERVER_RECEIVE(CONTEXT, BUFFER, POSITION, SIZE)                    (CONTEXT)->Read(BUFFER, POSITION, SIZE)

#define MP_PIPE_BUFFER                                                             array<unsigned char>^
#define MP_PIPE_BUFFER_INITIALIZE(CONTEXT, SIZE)                                   (CONTEXT) = gcnew array<unsigned char>(SIZE)
#define MP_PIPE_BUFFER_FINALIZE(CONTEXT)
#define MP_PIPE_BUFFER_SIZE_GET(CONTEXT)                                           (int)(CONTEXT)->Length
#define MP_PIPE_BUFFER_UTF8_GET(CONTEXT, POSITION, SIZE)                           ::System::Text::Encoding::UTF8->GetString(CONTEXT, POSITION, SIZE)
#define MP_PIPE_BUFFER_UTF8_SET(CONTEXT, VALUE)                                    CONTEXT = ::System::Text::Encoding::UTF8->GetBytes(VALUE)
#define MP_PIPE_BUFFER_UTF32_GET(CONTEXT, POSITION, SIZE)                          ::System::Text::Encoding::UTF32->GetString(CONTEXT, POSITION, SIZE)
#define MP_PIPE_BUFFER_UTF32_SET(CONTEXT, VALUE)                                   CONTEXT = ::System::Text::Encoding::UTF32->GetBytes(VALUE)
#define MP_PIPE_BUFFER_UNOCODE_GET(CONTEXT, POSITION, SIZE)                        ::System::Text::Encoding::Unicode->GetString(CONTEXT, POSITION, SIZE)
#define MP_PIPE_BUFFER_UNOCODE_SET(CONTEXT, VALUE)                                 CONTEXT = ::System::Text::Encoding::Unicode->GetBytes(VALUE)

#define MP_PIPE_DIRECTION_IN                                                       ::System::IO::Pipes::PipeDirection::In
#define MP_PIPE_DIRECTION_INOUT                                                    ::System::IO::Pipes::PipeDirection::InOut
#define MP_PIPE_DIRECTION_OUT                                                      ::System::IO::Pipes::PipeDirection::Out

#define MP_WEB_CLIENT                                                              ::System::Net::WebClient
#define MP_WEB_CLIENT_INITIALIZE(CONTEXT)                                          CONTEXT = gcnew ::System::Net::WebClient()
#define MP_WEB_CLIENT_FINALIZE(CONTEXT)                                            (CONTEXT) = nullptr
#define MP_WEB_CLIENT_CANCEL_ASYNC(CONTEXT)                                        (CONTEXT)->CancelAsync()
#define MP_WEB_CLIENT_ISWORKING(CONTEXT)                                           (CONTEXT)->IsBusy
#define MP_WEB_CLIENT_ONPROGRESS_SET(CONTEXT, CALLBACK)                            (CONTEXT)->DownloadProgressChanged += gcnew ::System::Net::DownloadProgressChangedEventHandler(CALLBACK)
#define MP_WEB_CLIENT_DOWNLOAD_DATA(CONTEXT, REMOTE_URL)                           (CONTEXT)->DownloadData(REMOTE_URL)
#define MP_WEB_CLIENT_DOWNLOAD_DATA_ASYNC(CONTEXT, REMOTE_URL, CALLBACK, SENDER)   (CONTEXT)->DownloadFileCompleted += gcnew ::System::ComponentModel::AsyncCompletedEventHandler(CALLBACK); (CONTEXT)->QueryString->Add("url", REMOTE_URL); (CONTEXT)->DownloadDataAsync(gcnew System::Uri(REMOTE_URL), REMOTE_URL)
#define MP_WEB_CLIENT_DOWNLOAD_FILE(CONTEXT, REMOTE_URL, FILE_URL)                 (CONTEXT)->DownloadFile(REMOTE_URL, FILE_URL)
#define MP_WEB_CLIENT_DOWNLOAD_FILE_ASYNC(CONTEXT, REMOTE_URL, FILE_URL, CALLBACK) (CONTEXT)->DownloadFileCompleted += gcnew ::System::ComponentModel::AsyncCompletedEventHandler(CALLBACK); (CONTEXT)->QueryString->Add("url", REMOTE_URL); (CONTEXT)->DownloadFileAsync(gcnew System::Uri(REMOTE_URL), FILE_URL)
#define MP_WEB_CLIENT_DOWNLOAD_STRING(CONTEXT, REMOTE_URL)                         (CONTEXT)->DownloadString(REMOTE_URL)
#define MP_WEB_CLIENT_DOWNLOAD_STRING_ASYNC(CONTEXT, REMOTE_URL, CALLBACK, SENDER) (CONTEXT)->DownloadFileCompleted += gcnew ::System::ComponentModel::AsyncCompletedEventHandler(CALLBACK); (CONTEXT)->QueryString->Add("url", REMOTE_URL); (CONTEXT)->DownloadStringAsync(gcnew System::Uri(REMOTE_URL), REMOTE_URL)
#define MP_WEB_CLIENT_UPLOAD_DATA(CONTEXT, FILE_URL)                               (CONTEXT)->UploadData(REMOTE_URL)
#define MP_WEB_CLIENT_UPLOAD_FILE(CONTEXT, FILE_URL, REMOTE_URL)                   (CONTEXT)->UploadFile(REMOTE_URL, FILE_URL)
#define MP_WEB_CLIENT_UPLOAD_STRING(CONTEXT, FILE_URL)                             (CONTEXT)->UploadString(REMOTE_URL)
#define MP_WEB_CLIENT_CALLBACK_PROGRESS(CALLBACK, SENDER, PARAMS)                  CALLBACK(::System::Object^ SENDER, ::System::Net::DownloadProgressChangedEventArgs^ PARAMS)
#define MP_WEB_CLIENT_CALLBACK_DOWNLOAD_COMPLETED(CALLBACK, SENDER, PARAMS)        CALLBACK(::System::Object^ SENDER, ::System::ComponentModel::AsyncCompletedEventArgs^ PARAMS)
#define MP_WEB_CLIENT_CALLBACK_UPLOAD_COMPLETED(CALLBACK, SENDER, PARAMS)          CALLBACK(::System::Object^ SENDER, ::System::ComponentModel::AsyncCompletedEventArgs^ PARAMS)
#define MP_WEB_CLIENT_CALLBACK_DOWNLOAD_URL_GET(SENDER)                            dynamic_cast<::System::Net::WebClient^>(SENDER)->QueryString["url"]
#define MP_WEB_CLIENT_CALLBACK_UPLOAD_URL_GET(SENDER)                              dynamic_cast<::System::Net::WebClient^>(SENDER)->QueryString["url"]
#define MP_WEB_CLIENT_CALLBACK_PROGRESS_URL_GET(SENDER)                            dynamic_cast<::System::Net::WebClient^>(SENDER)->QueryString["url"]
#define MP_WEB_CLIENT_CALLBACK_PROGRESS_RECEIVED_SIZE_GET(PARAMS)                  PARAMS->BytesReceived
#define MP_WEB_CLIENT_CALLBACK_PROGRESS_RECEIVED_PERSENT_GET(PARAMS)               PARAMS->ProgressPercentage
#define MP_WEB_CLIENT_CALLBACK_PROGRESS_TOTAL_SIZE_GET(PARAMS)                     PARAMS->TotalBytesToReceive
