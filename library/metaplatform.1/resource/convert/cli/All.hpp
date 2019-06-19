//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

MP_CLASS_INTERNAL __MP_CONVERT
{
public:
    __forceinline static ::System::String^ GetBase64(::System::IO::Stream^ context)
    {
        if (context->CanSeek)
        {
            context->Position = 0;
            return ::System::Convert::ToBase64String(GetStream(context)->GetBuffer(), 0, (int)context->Length);
        }
        else
        {
            return ::System::Convert::ToBase64String(GetStream(context)->GetBuffer());
        }
    }

    __forceinline static ::System::IO::MemoryStream^ GetStream(::System::IO::Stream^ context)
    {
        auto a_Result = dynamic_cast<::System::IO::MemoryStream^>(context);
        if (a_Result == nullptr)
        {
            {
                a_Result = gcnew ::System::IO::MemoryStream();
            }
            if (context != nullptr)
            {
                context->CopyTo(a_Result);
            }
        }
        return a_Result;
    }

    __forceinline static ::System::String^ GetString(::System::IO::Stream^ context, ::System::Text::Encoding^ value)
    {
        if (context->CanSeek)
        {
            context->Position = 0;
            return value->GetString(GetStream(context)->GetBuffer(), 0, (int)context->Length);
        }
        else
        {
            return value->GetString(GetStream(context)->GetBuffer());
        }
    }

    __forceinline static void SetStream(::System::IO::Stream^ context, array<unsigned char>^ value)
    {
        if (context->CanSeek)
        {
            context->Position = 0;
            context->SetLength(value->Length);
        }
        {
            context->Write(value, 0, value->Length);
        }
    }
};

#define MP_CONVERT_COLOR_FROM_INT(CONTEXT)                                     ::System::Windows::Media::Color::FromArgb((unsigned char)(((CONTEXT) >> 24) & 0xFF), (unsigned char)(((CONTEXT) >> 16) & 0xFF), (unsigned char)(((CONTEXT) >> 8) & 0xFF), (unsigned char)((CONTEXT) & 0xFF))
#define MP_CONVERT_COLOR_FROM_ACOLOR(A, CONTEXT)                               ::System::Windows::Media::Color::FromArgb((unsigned char)(A), (CONTEXT).R, (CONTEXT).G, (CONTEXT).B)
#define MP_CONVERT_COLOR_FROM_ARGB(A, R, G, B)                                 ::System::Windows::Media::Color::FromArgb((unsigned char)(A), (unsigned char)(R), (unsigned char)(G), (unsigned char)(B))
#define MP_CONVERT_COLOR_FROM_RGB(R, G, B)                                     ::System::Windows::Media::Color::FromArgb(0xFF, (unsigned char)(R), (unsigned char)(G), (unsigned char)(B))

#define MP_CONVERT_COLOR_TO_INT(CONTEXT)                                       ((((int)(CONTEXT).A) << 24) | (((int)(CONTEXT).R) << 16) | (((int)(CONTEXT).G) << 8) | ((int)(CONTEXT).B))

#define MP_CONVERT_STREAM_FROM_ASCII(CONTEXT, VALUE)                           __MP_CONVERT::SetStream(CONTEXT, ::System::Text::Encoding::ASCII->GetBytes(VALUE))
#define MP_CONVERT_STREAM_FROM_BASE64(CONTEXT, VALUE)                          __MP_CONVERT::SetStream(CONTEXT, ::System::Convert::FromBase64String(VALUE))
#define MP_CONVERT_STREAM_FROM_PICTURE(CONTEXT, VALUE)                         { (CONTEXT)->SetLength(0); if ((VALUE)->StreamSource != nullptr) { if ((VALUE)->StreamSource->CanSeek) (VALUE)->StreamSource->Position = 0; (VALUE)->StreamSource->CopyTo(CONTEXT); } }
#define MP_CONVERT_STREAM_FROM_UNICODE(CONTEXT, VALUE)                         __MP_CONVERT::SetStream(CONTEXT, ::System::Text::Encoding::Unicode->GetBytes(VALUE))
#define MP_CONVERT_STREAM_FROM_UTF32(CONTEXT, VALUE)                           __MP_CONVERT::SetStream(CONTEXT, ::System::Text::Encoding::UTF32->GetBytes(VALUE))
#define MP_CONVERT_STREAM_FROM_UTF7(CONTEXT, VALUE)                            __MP_CONVERT::SetStream(CONTEXT, ::System::Text::Encoding::UTF7->GetBytes(VALUE))
#define MP_CONVERT_STREAM_FROM_UTF8(CONTEXT, VALUE)                            __MP_CONVERT::SetStream(CONTEXT, ::System::Text::Encoding::UTF8->GetBytes(VALUE))
#define MP_CONVERT_STREAM_FROM_WEBNAME(CONTEXT, VALUE)                         __MP_CONVERT::SetStream(CONTEXT, ::System::Text::Encoding::WebName->GetBytes(VALUE))

#define MP_CONVERT_STREAM_TO_ASCII(CONTEXT)                                    __MP_CONVERT::GetString(CONTEXT, ::System::Text::Encoding::ASCII)
#define MP_CONVERT_STREAM_TO_BASE64(CONTEXT)                                   __MP_CONVERT::GetBase64(CONTEXT)
#define MP_CONVERT_STREAM_TO_PICTURE(CONTEXT, VALUE)                           try { (CONTEXT)->BeginInit(); (CONTEXT)->StreamSource = (VALUE)->Length > 0 ? VALUE : nullptr; (CONTEXT)->EndInit(); } catch (...) { (CONTEXT)->StreamSource = nullptr; } (CONTEXT)->Freeze()
#define MP_CONVERT_STREAM_TO_UNICODE(CONTEXT)                                  __MP_CONVERT::GetString(CONTEXT, ::System::Text::Encoding::Unicode)
#define MP_CONVERT_STREAM_TO_UTF32(CONTEXT)                                    __MP_CONVERT::GetString(CONTEXT, ::System::Text::Encoding::UTF32)
#define MP_CONVERT_STREAM_TO_UTF7(CONTEXT)                                     __MP_CONVERT::GetString(CONTEXT, ::System::Text::Encoding::UTF7)
#define MP_CONVERT_STREAM_TO_UTF8(CONTEXT)                                     __MP_CONVERT::GetString(CONTEXT, ::System::Text::Encoding::UTF8)
#define MP_CONVERT_STREAM_TO_WEBNAME(CONTEXT)                                  __MP_CONVERT::GetString(CONTEXT, ::System::Text::Encoding::WebName)

#define MP_CONVERT_STRING_FROM_BASE64(CONTEXT)                                 ::System::Text::Encoding::ASCII->GetString(::System::Convert::FromBase64String(CONTEXT))
#define MP_CONVERT_STRING_FROM_DOUBLE(CONTEXT)                                 (CONTEXT).ToString()
#define MP_CONVERT_STRING_FROM_ESCAPED(CONTEXT)                                ::System::Uri::UnescapeDataString(CONTEXT)
#define MP_CONVERT_STRING_FROM_HEX(CONTEXT, NUMBER_COUNT)                      (CONTEXT).ToString("X" + #NUMBER_COUNT)
#define MP_CONVERT_STRING_FROM_INT(CONTEXT, NUMBER_COUNT)                      (CONTEXT).ToString("d" + #NUMBER_COUNT)
#define MP_CONVERT_STRING_FROM_TIME(CONTEXT, FORMAT)                           (CONTEXT).ToString(FORMAT, ::System::Globalization::CultureInfo::InvariantCulture)

#define MP_CONVERT_STRING_TO_BASE64(CONTEXT)                                   ::System::Convert::ToBase64String(::System::Text::Encoding::ASCII->GetBytes(CONTEXT), 0, (CONTEXT)->Length)
#define MP_CONVERT_STRING_TO_DOUBLE(CONTEXT)                                   ::System::Convert::ToDouble(CONTEXT)
#define MP_CONVERT_STRING_TO_ESCAPED(CONTEXT)                                  ::System::Uri::EscapeDataString(CONTEXT)
#define MP_CONVERT_STRING_TO_HEX(CONTEXT)                                      ::System::Convert::ToInt32(CONTEXT, 16)
#define MP_CONVERT_STRING_TO_INT(CONTEXT)                                      ::System::Convert::ToInt32(CONTEXT)
#define MP_CONVERT_STRING_TO_TIME(CONTEXT)                                     ::System::Convert::ToDateTime(CONTEXT)
