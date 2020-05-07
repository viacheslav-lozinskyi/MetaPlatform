//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#define MP_CONSOLE_BACKGROUND_GET                                         ::System::Console::BackgroundColor
#define MP_CONSOLE_BACKGROUND_SET(VALUE)                                  ::System::Console::BackgroundColor = (VALUE)
#define MP_CONSOLE_BACKGROUND_RESET                                       ::System::Console::ResetColor
#define MP_CONSOLE_CLEAR                                                  ::System::Console::Clear
#define MP_CONSOLE_CURSOR_X_GET                                           ::System::Console::CursorLeft
#define MP_CONSOLE_CURSOR_X_SET(VALUE)                                    ::System::Console::CursorLeft = (VALUE)
#define MP_CONSOLE_CURSOR_Y_GET                                           ::System::Console::CursorTop
#define MP_CONSOLE_CURSOR_Y_SET(VALUE)                                    ::System::Console::CursorTop = (VALUE)
#define MP_CONSOLE_CURSOR_VISIBLE_GET                                     ::System::Console::CursorVisible
#define MP_CONSOLE_CURSOR_VISIBLE_SET(VALUE)                              ::System::Console::CursorVisible = (VALUE)
#define MP_CONSOLE_FOREGROUND_GET                                         ::System::Console::ForegroundColor
#define MP_CONSOLE_FOREGROUND_SET(VALUE)                                  ::System::Console::ForegroundColor = (VALUE)
#define MP_CONSOLE_SIZE_X_GET                                             ::System::Console::BufferWidth
#define MP_CONSOLE_SIZE_Y_GET                                             ::System::Console::BufferHeight
#define MP_CONSOLE_WRITE(VALUE)                                           ::System::Console::Write(VALUE)
#define MP_CONSOLE_WRITELINE(VALUE)                                       ::System::Console::WriteLine(VALUE)

#define MP_CONSOLE_COLOR                                                  ::System::ConsoleColor
#define MP_CONSOLE_COLOR_BLACK                                            ::System::ConsoleColor::Black
#define MP_CONSOLE_COLOR_BLUE                                             ::System::ConsoleColor::Blue
#define MP_CONSOLE_COLOR_CYAN                                             ::System::ConsoleColor::Cyan
#define MP_CONSOLE_COLOR_DARK_BLUE                                        ::System::ConsoleColor::DarkBlue
#define MP_CONSOLE_COLOR_DARK_CYAN                                        ::System::ConsoleColor::DarkCyan
#define MP_CONSOLE_COLOR_DARK_GRAY                                        ::System::ConsoleColor::DarkGray
#define MP_CONSOLE_COLOR_DARK_GREEN                                       ::System::ConsoleColor::DarkGreen
#define MP_CONSOLE_COLOR_DARK_MAGENTA                                     ::System::ConsoleColor::DarkMagenta
#define MP_CONSOLE_COLOR_DARK_RED                                         ::System::ConsoleColor::DarkRed
#define MP_CONSOLE_COLOR_DARK_YELLOW                                      ::System::ConsoleColor::DarkYellow
#define MP_CONSOLE_COLOR_GRAY                                             ::System::ConsoleColor::Gray
#define MP_CONSOLE_COLOR_GREEN                                            ::System::ConsoleColor::Green
#define MP_CONSOLE_COLOR_MAGENTA                                          ::System::ConsoleColor::Magenta
#define MP_CONSOLE_COLOR_RED                                              ::System::ConsoleColor::Red
#define MP_CONSOLE_COLOR_YELLOW                                           ::System::ConsoleColor::Yellow
#define MP_CONSOLE_COLOR_WHITE                                            ::System::ConsoleColor::White
