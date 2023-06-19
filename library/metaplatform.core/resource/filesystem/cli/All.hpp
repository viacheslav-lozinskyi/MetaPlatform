//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#define MP_DRIVE_FIND                                                          array<::System::String^>^
#define MP_DRIVE_FIND_ITERATOR                                                 int
#define MP_DRIVE_FIND_INITIALIZE(CONTEXT, ITERATOR)                            (CONTEXT) = ::System::IO::Directory::GetLogicalDrives(); (ITERATOR) = 0;
#define MP_DRIVE_FIND_FINALIZE(CONTEXT, ITERATOR)                              (ITERATOR) = 0;
#define MP_DRIVE_FIND_GET(CONTEXT, ITERATOR)                                   ((((ITERATOR) >= 0) && ((ITERATOR) < (CONTEXT)->Length)) ? (CONTEXT)[ITERATOR] : "")
#define MP_DRIVE_FIND_FOUND(CONTEXT, ITERATOR)                                 (((ITERATOR) >= 0) && ((ITERATOR) < (CONTEXT)->Length))
#define MP_DRIVE_FIND_NEXT(CONTEXT, ITERATOR)                                  (ITERATOR)++;

#define MP_ENVIRONMENT_VARIABLE_GET(NAME)                                      ::System::Environment::GetEnvironmentVariable(NAME)
#define MP_ENVIRONMENT_VARIABLE_SET(NAME, VALUE)                               ::System::Environment::SetEnvironmentVariable(NAME, VALUE)

#define MP_FILE_FOUND(URL)                                                     ::System::IO::File::Exists(URL)
#define MP_FILE_EXECUTE(URL)                                                   ::System::Diagnostics::Process::Start(URL)
#define MP_FILE_CREATE(URL)                                                    ::System::IO::File::Create(URL)
#define MP_FILE_DELETE(URL)                                                    ::System::IO::File::Delete(URL)
#define MP_FILE_COPY(SRC_URL, DST_URL)                                         ::System::IO::File::Copy((SRC_URL), (DST_URL), true)
#define MP_FILE_MOVE(SRC_URL, DST_URL)                                         ::System::IO::File::Move((SRC_URL), (DST_URL))
#define MP_FILE_FULLTEXT_GET(URL)                                              ::System::IO::File::ReadAllText(URL)
#define MP_FILE_FULLTEXT_SET(URL, VALUE)                                       ::System::IO::File::WriteAllText((URL), (VALUE))
#define MP_FILE_SIZE_GET(URL)                                                  ::System::IO::FileInfo(URL).Length

#define MP_FILE_ATTRIBUTES_GET(URL)                                            ::System::IO::File::GetAttributes(URL)
#define MP_FILE_ATTRIBUTES_SET(URL, VALUE)                                     ::System::IO::File::SetAttributes((URL), (VALUE))
#define MP_FILE_CREATIONTIME_GET(URL)                                          ::System::IO::File::GetCreationTime(URL)
#define MP_FILE_CREATIONTIME_SET(URL, VALUE)                                   ::System::IO::File::SetCreationTime((URL), (VALUE))
#define MP_FILE_ACCESSTIME_GET(URL)                                            ::System::IO::File::GetLastAccessTime(URL)
#define MP_FILE_ACCESSTIME_SET(URL, VALUE)                                     ::System::IO::File::SetLastAccessTime((URL), (VALUE))
#define MP_FILE_WRITETIME_GET(URL)                                             ::System::IO::File::GetLastWriteTime(URL)
#define MP_FILE_WRITETIME_SET(URL, VALUE)                                      ::System::IO::File::SetLastWriteTime((URL), (VALUE))

#define MP_FILE_ATTRIBUTE                                                      ::System::IO::FileAttributes
#define MP_FILE_ATTRIBUTE_ARCHIVE                                              ::System::IO::FileAttributes::Archive
#define MP_FILE_ATTRIBUTE_COMPRESSED                                           ::System::IO::FileAttributes::Compressed
#define MP_FILE_ATTRIBUTE_DEVICE                                               ::System::IO::FileAttributes::Device
#define MP_FILE_ATTRIBUTE_ENCRYPTED                                            ::System::IO::FileAttributes::Encrypted
#define MP_FILE_ATTRIBUTE_HIDDEN                                               ::System::IO::FileAttributes::Hidden
#define MP_FILE_ATTRIBUTE_NORMAL                                               ::System::IO::FileAttributes::Normal
#define MP_FILE_ATTRIBUTE_READONLY                                             ::System::IO::FileAttributes::ReadOnly
#define MP_FILE_ATTRIBUTE_SYSTEM                                               ::System::IO::FileAttributes::System
#define MP_FILE_ATTRIBUTE_TEMPORARY                                            ::System::IO::FileAttributes::Temporary

#define MP_FILE_FIND                                                           array<::System::String^>^
#define MP_FILE_FIND_ITERATOR                                                  int
#define MP_FILE_FIND_INITIALIZE(CONTEXT, ITERATOR, URL)                        (CONTEXT) = ::System::IO::Directory::GetFiles(URL); (ITERATOR) = 0;
#define MP_FILE_FIND_FINALIZE(CONTEXT, ITERATOR)                               (ITERATOR) = 0;
#define MP_FILE_FIND_GET(CONTEXT, ITERATOR)                                    ((((ITERATOR) >= 0) && ((ITERATOR) < (CONTEXT)->Length)) ? (CONTEXT)[ITERATOR] : "")
#define MP_FILE_FIND_FOUND(CONTEXT, ITERATOR)                                  (((ITERATOR) >= 0) && ((ITERATOR) < (CONTEXT)->Length))
#define MP_FILE_FIND_NEXT(CONTEXT, ITERATOR)                                   (ITERATOR)++;

#define MP_FILE_STREAM                                                         ::System::IO::FileStream
#define MP_FILE_STREAM_INITIALIZE(CONTEXT, URL, MODE, ACCESS, SHARE)           CONTEXT = gcnew ::System::IO::FileStream(URL, MODE, ACCESS, SHARE)
#define MP_FILE_STREAM_FINALIZE(CONTEXT)                                       (CONTEXT)->Close(); (CONTEXT) = nullptr
#define MP_FILE_STREAM_FLUSH(CONTEXT)                                          (CONTEXT)->Flush()
#define MP_FILE_STREAM_HANDLER_GET(CONTEXT)                                    (CONTEXT)->Handle
#define MP_FILE_STREAM_POSITION_GET(CONTEXT)                                   (CONTEXT)->Position
#define MP_FILE_STREAM_POSITION_SET(CONTEXT, VALUE)                            (CONTEXT)->Position = VALUE
#define MP_FILE_STREAM_POSITION_SUPPORTED(CONTEXT)                             (CONTEXT)->CanSeek
#define MP_FILE_STREAM_READ(CONTEXT, BUFFER, POSITION, SIZE)                   (CONTEXT)->Read(BUFFER, POSITION, SIZE)
#define MP_FILE_STREAM_READ_SUPPORTED(CONTEXT)                                 (CONTEXT)->CanRead
#define MP_FILE_STREAM_SIZE_GET(CONTEXT)                                       (CONTEXT)->Length
#define MP_FILE_STREAM_SIZE_SET(CONTEXT, VALUE)                                (CONTEXT)->SetLength(VALUE)
#define MP_FILE_STREAM_URL_GET(CONTEXT)                                        (CONTEXT)->Name
#define MP_FILE_STREAM_WRITE(CONTEXT, BUFFER, POSITION, SIZE)                  (CONTEXT)->Write(BUFFER, POSITION, SIZE)
#define MP_FILE_STREAM_WRITE_SUPPORTED(CONTEXT)                                (CONTEXT)->CanWrite

#define MP_FILE_STREAM_BUFFER                                                  array<unsigned char>
#define MP_FILE_STREAM_BUFFER_INITIALIZE(CONTEXT, SIZE)                        (CONTEXT) = gcnew array<unsigned char>(SIZE)
#define MP_FILE_STREAM_BUFFER_FINALIZE(CONTEXT)                                (CONTEXT) = nullptr
#define MP_FILE_STREAM_BUFFER_BYTE_GET(CONTEXT, INDEX)                         (CONTEXT)[INDEX]
#define MP_FILE_STREAM_BUFFER_BYTE_SET(CONTEXT, INDEX, VALUE)                  (CONTEXT)[INDEX] = VALUE
#define MP_FILE_STREAM_BUFFER_SIZE_GET(CONTEXT)                                (CONTEXT)->Length

#define MP_FILE_STREAM_ACCESS                                                  ::System::IO::FileAccess
#define MP_FILE_STREAM_ACCESS_READ                                             ::System::IO::FileAccess::Read
#define MP_FILE_STREAM_ACCESS_READWRITE                                        ::System::IO::FileAccess::ReadWrite
#define MP_FILE_STREAM_ACCESS_WRITE                                            ::System::IO::FileAccess::Write

#define MP_FILE_STREAM_MODE                                                    ::System::IO::FileMode
#define MP_FILE_STREAM_MODE_CREATENEW                                          ::System::IO::FileMode::CreateNew
#define MP_FILE_STREAM_MODE_CREATE                                             ::System::IO::FileMode::Create
#define MP_FILE_STREAM_MODE_OPEN                                               ::System::IO::FileMode::Open
#define MP_FILE_STREAM_MODE_OPENORCREATE                                       ::System::IO::FileMode::OpenOrCreate
#define MP_FILE_STREAM_MODE_TRUNCATE                                           ::System::IO::FileMode::Truncate
#define MP_FILE_STREAM_MODE_APPEND                                             ::System::IO::FileMode::Append

#define MP_FILE_STREAM_SHARE                                                   ::System::IO::FileShare
#define MP_FILE_STREAM_SHARE_NONE                                              ::System::IO::FileShare::None
#define MP_FILE_STREAM_SHARE_READ                                              ::System::IO::FileShare::Read
#define MP_FILE_STREAM_SHARE_WRITE                                             ::System::IO::FileShare::Write
#define MP_FILE_STREAM_SHARE_READWRITE                                         ::System::IO::FileShare::ReadWrite
#define MP_FILE_STREAM_SHARE_DELETE                                            ::System::IO::FileShare::Delete
#define MP_FILE_STREAM_SHARE_INHERITABLE                                       ::System::IO::FileShare::Inheritable

#define MP_FOLDER_FOUND(URL)                                                   ::System::IO::Directory::Exists(URL)
#define MP_FOLDER_CREATE(URL)                                                  ::System::IO::Directory::CreateDirectory(URL)
#define MP_FOLDER_DELETE(URL)                                                  ::System::IO::Directory::Delete((URL), true)
#define MP_FOLDER_MOVE(SRC_URL, DST_URL)                                       ::System::IO::Directory::Move((SRC_URL), (DST_URL))

#define MP_FOLDER_COMBINE(URL, NAME)                                           ::System::IO::Path::Combine(URL, NAME)
#define MP_FOLDER_DIRECTORY_GET(URL)                                           ::System::IO::Path::GetDirectoryName(URL)
#define MP_FOLDER_EXTENSION_GET(URL)                                           ::System::IO::Path::GetExtension(URL)
#define MP_FOLDER_FILENAME_GET(URL)                                            ::System::IO::Path::GetFileName(URL)
#define MP_FOLDER_FULLPATH_GET(URL)                                            ::System::IO::Path::GetFullPath(URL)

#define MP_FOLDER_ATTRIBUTES_GET(URL)                                          (gcnew ::System::IO::FileInfo(URL))->Attributes
#define MP_FOLDER_ATTRIBUTES_SET(URL, VALUE)                                   ::System::IO::File::SetAttributes((URL), (VALUE))
#define MP_FOLDER_CREATIONTIME_GET(URL)                                        ::System::IO::Directory::GetCreationTime(URL)
#define MP_FOLDER_CREATIONTIME_SET(URL, VALUE)                                 ::System::IO::Directory::SetCreationTime((URL), (VALUE))
#define MP_FOLDER_ACCESSTIME_GET(URL)                                          ::System::IO::Directory::GetLastAccessTime(URL)
#define MP_FOLDER_ACCESSTIME_SET(URL, VALUE)                                   ::System::IO::Directory::SetLastAccessTime((URL), (VALUE))
#define MP_FOLDER_WRITETIME_GET(URL)                                           ::System::IO::Directory::GetLastWriteTime(URL)
#define MP_FOLDER_WRITETIME_SET(URL, VALUE)                                    ::System::IO::Directory::SetLastWriteTime((URL), (VALUE))

#define MP_FOLDER_ATTRIBUTE                                                    ::System::IO::FileAttributes
#define MP_FOLDER_ATTRIBUTE_ARCHIVE                                            ::System::IO::FileAttributes::Archive
#define MP_FOLDER_ATTRIBUTE_COMPRESSED                                         ::System::IO::FileAttributes::Compressed
#define MP_FOLDER_ATTRIBUTE_DEVICE                                             ::System::IO::FileAttributes::Device
#define MP_FOLDER_ATTRIBUTE_ENCRYPTED                                          ::System::IO::FileAttributes::Encrypted
#define MP_FOLDER_ATTRIBUTE_HIDDEN                                             ::System::IO::FileAttributes::Hidden
#define MP_FOLDER_ATTRIBUTE_NORMAL                                             ::System::IO::FileAttributes::Normal
#define MP_FOLDER_ATTRIBUTE_READONLY                                           ::System::IO::FileAttributes::ReadOnly
#define MP_FOLDER_ATTRIBUTE_SYSTEM                                             ::System::IO::FileAttributes::System
#define MP_FOLDER_ATTRIBUTE_TEMPORARY                                          ::System::IO::FileAttributes::Temporary

#define MP_FOLDER_FIND                                                         array<::System::String^>^
#define MP_FOLDER_FIND_ITERATOR                                                int
#define MP_FOLDER_FIND_INITIALIZE(CONTEXT, ITERATOR, URL)                      (CONTEXT) = ::System::IO::Directory::GetDirectories(URL); (ITERATOR) = 0;
#define MP_FOLDER_FIND_FINALIZE(CONTEXT, ITERATOR)                             (ITERATOR) = 0;
#define MP_FOLDER_FIND_GET(CONTEXT, ITERATOR)                                  ((((ITERATOR) >= 0) && ((ITERATOR) < (CONTEXT)->Length)) ? (CONTEXT)[ITERATOR] : "")
#define MP_FOLDER_FIND_FOUND(CONTEXT, ITERATOR)                                (((ITERATOR) >= 0) && ((ITERATOR) < (CONTEXT)->Length))
#define MP_FOLDER_FIND_NEXT(CONTEXT, ITERATOR)                                 (ITERATOR)++;

#define MP_FOLDER_SEPARATOR                                                    "\\"

#define MP_FOLDER_SYSTEM_CURRENT_APPLICATION                                   ::System::IO::Path::GetDirectoryName(::System::Reflection::Assembly::GetExecutingAssembly()->Location) + "\\"
#define MP_FOLDER_SYSTEM_DATA_APPLICATION                                      ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::ApplicationData)
#define MP_FOLDER_SYSTEM_DATA_LOCAL                                            ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::LocalApplicationData)
#define MP_FOLDER_SYSTEM_DATA_COMMON                                           ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::CommonApplicationData)
#define MP_FOLDER_SYSTEM_DESKTOP                                               ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::Desktop)
#define MP_FOLDER_SYSTEM_DOCUMENTS                                             ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::MyDocuments)
#define MP_FOLDER_SYSTEM_FAVORITES                                             ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::Favorites)
#define MP_FOLDER_SYSTEM_FONTS                                                 ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::Fonts)
#define MP_FOLDER_SYSTEM_MUSIC                                                 ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::MyMusic)
#define MP_FOLDER_SYSTEM_PERSONAL                                              ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::Personal)
#define MP_FOLDER_SYSTEM_PICTURES                                              ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::MyPictures)
#define MP_FOLDER_SYSTEM_PROGRAMS                                              ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::Programs)
#define MP_FOLDER_SYSTEM_RECENT                                                ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::Recent)
#define MP_FOLDER_SYSTEM_RESOURCES                                             ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::Resources)
#define MP_FOLDER_SYSTEM_SEND_TO                                               ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::SendTo)
#define MP_FOLDER_SYSTEM_START_MENU                                            ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::StartMenu)
#define MP_FOLDER_SYSTEM_STARTUP                                               ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::Startup)
#define MP_FOLDER_SYSTEM_SYSTEM                                                ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::System)
#define MP_FOLDER_SYSTEM_SYSTEM_ROOT                                           ::System::Environment::GetEnvironmentVariable("SYSTEMROOT")
#define MP_FOLDER_SYSTEM_TEMP                                                  ::System::IO::Path::GetTempPath()
#define MP_FOLDER_SYSTEM_USER_HOME                                             ::System::Environment::GetEnvironmentVariable("USERPROFILE")
#define MP_FOLDER_SYSTEM_VIDEOS                                                ::System::Environment::GetFolderPath(::System::Environment::SpecialFolder::MyVideos)
