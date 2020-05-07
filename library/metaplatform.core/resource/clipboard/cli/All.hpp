//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#define MP_CLIPBOARD_CLEAR               ::System::Windows::Clipboard::Clear
#define MP_CLIPBOARD_PICTURE_GET         ::System::Windows::Clipboard::GetImage
#define MP_CLIPBOARD_PICTURE_SET(VALUE)  ::System::Windows::Clipboard::SetImage(VALUE)
#define MP_CLIPBOARD_STRING_GET          ::System::Windows::Clipboard::GetText
#define MP_CLIPBOARD_STRING_SET(VALUE)   ::System::Windows::Clipboard::SetText(VALUE)
