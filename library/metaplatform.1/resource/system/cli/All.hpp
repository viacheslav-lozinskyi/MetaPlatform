//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#define MP_SYSTEM_BORDER_SIZE                                                  ::System::Windows::SystemParameters::Border
#define MP_SYSTEM_CAPTION_SIZE_Y                                               (int)::System::Windows::SystemParameters::WindowCaptionHeight
#define MP_SYSTEM_CARET_SIZE_X                                                 (int)::System::Windows::SystemParameters::CaretWidth
#define MP_SYSTEM_COMPUTER_NAME                                                ::System::Environment::MachineName
#define MP_SYSTEM_CURSOR_SIZE_X                                                (int)::System::Windows::SystemParameters::CursorWidth
#define MP_SYSTEM_CURSOR_SIZE_Y                                                (int)::System::Windows::SystemParameters::CursorHeight
#define MP_SYSTEM_ICON_SIZE_X                                                  (int)::System::Windows::SystemParameters::SmallIconWidth
#define MP_SYSTEM_ICON_SIZE_Y                                                  (int)::System::Windows::SystemParameters::SmallIconHeight

#define MP_SYSTEM_KEYBOARD_DELAY                                               ::System::Windows::SystemParameters::KeyboardDelay
#define MP_SYSTEM_KEYBOARD_SPEED                                               ::System::Windows::SystemParameters::KeyboardSpeed
#define MP_SYSTEM_MOUSE_SUPPORTED                                              ::System::Windows::SystemParameters::IsMousePresent
#define MP_SYSTEM_OPERATION_SYSTEM_NAME                                        ::System::Environment::OSVersion->VersionString
#define MP_SYSTEM_PROCESSOR_COUNT                                              ::System::Environment::ProcessorCount

#define MP_SYSTEM_SCREEN_CLIENT_X                                              (int)::System::Windows::SystemParameters::WorkArea.Left
#define MP_SYSTEM_SCREEN_CLIENT_Y                                              (int)::System::Windows::SystemParameters::WorkArea.Top
#define MP_SYSTEM_SCREEN_CLIENT_SIZE_X                                         (int)::System::Windows::SystemParameters::WorkArea.Width
#define MP_SYSTEM_SCREEN_CLIENT_SIZE_Y                                         (int)::System::Windows::SystemParameters::WorkArea.Height
#define MP_SYSTEM_SCREEN_DPI                                                   (int)::System::Windows::SystemParameters::typeid->GetProperty("Dpi", ::System::Reflection::BindingFlags::NonPublic | ::System::Reflection::BindingFlags::Static)->GetValue(nullptr, nullptr)
#define MP_SYSTEM_SCREEN_FULL_SIZE_X                                           (int)::System::Windows::SystemParameters::FullPrimaryScreenWidth
#define MP_SYSTEM_SCREEN_FULL_SIZE_Y                                           (int)::System::Windows::SystemParameters::FullPrimaryScreenHeight
#define MP_SYSTEM_SCREEN_PRIMARY_SIZE_X                                        (int)::System::Windows::SystemParameters::PrimaryScreenWidth
#define MP_SYSTEM_SCREEN_PRIMARY_SIZE_Y                                        (int)::System::Windows::SystemParameters::PrimaryScreenHeight
#define MP_SYSTEM_SCREEN_VIRTUAL_SIZE_X                                        (int)::System::Windows::SystemParameters::VirtualScreenWidth
#define MP_SYSTEM_SCREEN_VIRTUAL_SIZE_Y                                        (int)::System::Windows::SystemParameters::VirtualScreenHeight

#define MP_SYSTEM_USER_NAME                                                    ::System::Environment::UserName
#define MP_SYSTEM_USER_DOMAIN_NAME                                             ::System::Environment::UserDomainName

#define MP_SYSTEM_GUID_CREATE                                                  ::System::Guid::NewGuid().ToString
