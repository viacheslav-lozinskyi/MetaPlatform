//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#define MP_REGISTRY                                                            ::Microsoft::Win32::RegistryKey^
#define MP_REGISTRY_INITIALIZE(CONTEXT, ROOT, KEY_NAME, READ_ONLY)             (CONTEXT) = (READ_ONLY) ? (ROOT)->OpenSubKey(KEY_NAME) : (ROOT)->CreateSubKey(KEY_NAME)
#define MP_REGISTRY_FINALIZE(CONTEXT)                                          (CONTEXT)->Close()
#define MP_REGISTRY_EMPTY(CONTEXT)                                             (((CONTEXT)->SubKeyCount + (CONTEXT)->ValueCount) == 0)
#define MP_REGISTRY_APPEND(CONTEXT, NAME)                                      (CONTEXT)->CreateSubKey(NAME)->Close()
#define MP_REGISTRY_DELETE(CONTEXT, NAME)                                      (CONTEXT)->DeleteSubKeyTree(NAME)
#define MP_REGISTRY_TYPE_GET(CONTEXT, NAME)                                    (((CONTEXT)->GetValue(NAME) != nullptr) ? (CONTEXT)->GetValueKind(NAME) : ::Microsoft::Win32::RegistryValueKind::None)
#define MP_REGISTRY_GET(CONTEXT, NAME, DEFAULT_VALUE)                          (CONTEXT)->GetValue(NAME, DEFAULT_VALUE)->ToString()
#define MP_REGISTRY_SET(CONTEXT, NAME, VALUE)                                  (CONTEXT)->SetValue(NAME, VALUE)
#define MP_REGISTRY_CLEAR(CONTEXT, NAME)                                       (CONTEXT)->DeleteValue(NAME, false)
#define MP_REGISTRY_FOUND(CONTEXT)                                             (CONTEXT) != nullptr

#define MP_REGISTRY_FIND                                                       array<::System::String^>^
#define MP_REGISTRY_FIND_ITERATOR                                              int
#define MP_REGISTRY_FIND_INITIALIZE(CONTEXT, ROOT, KEY_NAME, ITERATOR, ISVALUES) (CONTEXT) = (ISVALUES) ? (ROOT)->OpenSubKey(KEY_NAME)->GetValueNames() : (ROOT)->OpenSubKey(KEY_NAME)->GetSubKeyNames(); (ITERATOR) = 0
#define MP_REGISTRY_FIND_FINALIZE(CONTEXT, ITERATOR)                           (ITERATOR) = 0
#define MP_REGISTRY_FIND_GET(CONTEXT, ITERATOR)                                ((((ITERATOR) >= 0) && ((ITERATOR) < (CONTEXT)->Length)) ? (CONTEXT)[ITERATOR] : "")
#define MP_REGISTRY_FIND_FOUND(CONTEXT, ITERATOR)                              (((ITERATOR) >= 0) && ((ITERATOR) < (CONTEXT)->Length))
#define MP_REGISTRY_FIND_NEXT(CONTEXT, ITERATOR)                               (ITERATOR)++

#define MP_REGISTRY_TYPE                                                       ::Microsoft::Win32::RegistryValueKind
#define MP_REGISTRY_TYPE_NONE                                                  ::Microsoft::Win32::RegistryValueKind::None
#define MP_REGISTRY_TYPE_UNKNOWN                                               ::Microsoft::Win32::RegistryValueKind::Unknown
#define MP_REGISTRY_TYPE_STRING                                                ::Microsoft::Win32::RegistryValueKind::String
#define MP_REGISTRY_TYPE_EXPAND_STRING                                         ::Microsoft::Win32::RegistryValueKind::ExpandString
#define MP_REGISTRY_TYPE_BINARY                                                ::Microsoft::Win32::RegistryValueKind::Binary
#define MP_REGISTRY_TYPE_DWORD                                                 ::Microsoft::Win32::RegistryValueKind::DWord
#define MP_REGISTRY_TYPE_MULTI_STRING                                          ::Microsoft::Win32::RegistryValueKind::MultiString
#define MP_REGISTRY_TYPE_QWORD                                                 ::Microsoft::Win32::RegistryValueKind::QWord

#define MP_REGISTRY_ROOT_CLASSES                                               ::Microsoft::Win32::Registry::ClassesRoot
#define MP_REGISTRY_ROOT_CURRENT_CONFIG                                        ::Microsoft::Win32::Registry::CurrentConfig
#define MP_REGISTRY_ROOT_CURRENT_USER                                          ::Microsoft::Win32::Registry::CurrentUser
#define MP_REGISTRY_ROOT_LOCAL_MACHINE                                         ::Microsoft::Win32::Registry::LocalMachine
#define MP_REGISTRY_ROOT_USERS                                                 ::Microsoft::Win32::Registry::Users
