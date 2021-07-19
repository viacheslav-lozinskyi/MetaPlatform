//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#define MP_PTR(TYPE)                                                           TYPE^
#define MP_REF(TYPE)                                                           TYPE%

#define MP_CLASS                                                               ref class
#define MP_CLASS_SHARED                                                        public ref class
#define MP_CLASS_INTERNAL                                                      [::System::Diagnostics::DebuggerStepThrough] ref class
#define MP_ENUM                                                                enum class
#define MP_FLAGS                                                               [::System::Flags] enum class
#define MP_TEMPLATE                                                            generic
#define MP_CONSTEXPR                                                           constexpr
#define MP_INLINE                                                              inline
#define MP_NOINLINE                                                            __declspec(noinline)
#define MP_NEW                                                                 gcnew
#define MP_DELETE                                                              delete

#define MP_FOREACH(TYPE, NAME, CONTAINER)                                      for each (TYPE NAME in CONTAINER)

#define MP_PROPERTY(TYPE, NAME)                                                property TYPE NAME

#define MP_TYPE_ID(TYPE)                                                       TYPE::typeid
#define MP_TYPE_ID_OBJECT(CONTEXT)                                             (CONTEXT)->GetType()
#define MP_TYPE_NAME(TYPE)                                                     TYPE::typeid->FullName->Replace('+', '.')
#define MP_TYPE_NAME_OBJECT(CONTEXT)                                           (CONTEXT)->GetType()->FullName->Replace('+', '.')

#define MP_VOID                                                                ::System::Object
#define MP_BOOL                                                                bool
#define MP_CHAR                                                                char
#define MP_WCHAR                                                               wchar_t
#define MP_FLOAT                                                               float
#define MP_DOUBLE                                                              double
#define MP_POINTER                                                             ::System::Object
#define MP_INT                                                                 int
#define MP_INT8                                                                __int8
#define MP_INT16                                                               __int16
#define MP_INT32                                                               __int32
#define MP_INT64                                                               __int64
#define MP_INT128                                                              __int128
#define MP_UINT8                                                               unsigned __int8
#define MP_UINT16                                                              unsigned __int16
#define MP_UINT32                                                              unsigned __int32
#define MP_UINT64                                                              unsigned __int64
#define MP_UINT128                                                             unsigned __int128

#define MP_EXCEPTION                                                           ::System::Exception
#define MP_EXCEPTION_MESSAGE_GET(CONTEXT)                                      (CONTEXT)->Message

#define MP_BUFFER(TYPE)                                                        ::System::Collections::Generic::List<TYPE>
#define MP_BUFFER_EMPTY(CONTEXT)                                               ((CONTEXT)->Count == 0)
#define MP_BUFFER_CONTAINS(CONTEXT, INDEX)                                     (((INDEX) >= 0) && ((INDEX) < (CONTEXT)->Count))
#define MP_BUFFER_GET(CONTEXT, INDEX)                                          (CONTEXT)[INDEX]
#define MP_BUFFER_SET(CONTEXT, INDEX, VALUE)                                   (CONTEXT)[INDEX] = VALUE
#define MP_BUFFER_SIZE_GET(CONTEXT)                                            (CONTEXT)->Count
#define MP_BUFFER_APPEND(CONTEXT, VALUE)                                       (CONTEXT)->Add(VALUE)
#define MP_BUFFER_INSERT(CONTEXT, INDEX, VALUE)                                (CONTEXT)->Insert((INDEX), VALUE)
#define MP_BUFFER_DELETE(CONTEXT, INDEX)                                       (CONTEXT)->RemoveAt(INDEX)
#define MP_BUFFER_CLEAR(CONTEXT)                                               (CONTEXT)->Clear()

#define MP_MAP(TYPE)                                                           ::System::Collections::Generic::Dictionary<System::String^, TYPE>
#define MP_MAP_EMPTY(CONTEXT)                                                  ((CONTEXT)->Count == 0)
#define MP_MAP_CONTAINS(CONTEXT, KEY)                                          (CONTEXT)->ContainsKey(KEY)
#define MP_MAP_GET(CONTEXT, KEY)                                               (CONTEXT)[KEY]
#define MP_MAP_SIZE_GET(CONTEXT, KEY)                                          (CONTEXT)->Count
#define MP_MAP_APPEND(CONTEXT, KEY, VALUE)                                     (CONTEXT)->Add((KEY), VALUE)
#define MP_MAP_DELETE(CONTEXT, KEY)                                            (CONTEXT)->Remove(KEY)
#define MP_MAP_CLEAR(CONTEXT)                                                  (CONTEXT)->Clear()

#define MP_ARRAY(TYPE)                                                         array<TYPE>
#define MP_ARRAY_INITIALIZE(CONTEXT, TYPE, SIZE)                               CONTEXT = gcnew array<TYPE>(SIZE)
#define MP_ARRAY_FINALIZE(CONTEXT)                                             (CONTEXT) = nullptr
#define MP_ARRAY_CLEAR(CONTEXT)                                                ::System::Array::Clear((CONTEXT), 0, (CONTEXT)->Length)
#define MP_ARRAY_GET(CONTEXT, INDEX)                                           (CONTEXT)->GetValue(INDEX)
#define MP_ARRAY_SET(CONTEXT, INDEX, VALUE)                                    (CONTEXT)->SetValue(VALUE, INDEX)
#define MP_ARRAY_SIZE_GET(CONTEXT)                                             (CONTEXT)->Length
#define MP_ARRAY_SIZE_SET(CONTEXT, VALUE)                                      ::System::Array::Resize(CONTEXT, VALUE)

#define MP_STREAM_BUFFER                                                       array<System::Byte>
#define MP_STREAM_BUFFER_INITIALIZE(CONTEXT, SIZE)                             CONTEXT = gcnew array<System::Byte>(SIZE)
#define MP_STREAM_BUFFER_FINALIZE(CONTEXT)                                     (CONTEXT) = nullptr
#define MP_STREAM_BUFFER_EMPTY(CONTEXT)                                        ((CONTEXT)->Length == 0)
#define MP_STREAM_BUFFER_CLEAR(CONTEXT)                                        ::System::Array::Clear((CONTEXT), 0, (CONTEXT)->Length)
#define MP_STREAM_BUFFER_GET(CONTEXT, INDEX)                                   (CONTEXT)->GetValue(INDEX)
#define MP_STREAM_BUFFER_SET(CONTEXT, INDEX, VALUE)                            (CONTEXT)->SetValue(VALUE, INDEX)
#define MP_STREAM_BUFFER_SIZE_GET(CONTEXT)                                     (CONTEXT)->Length
#define MP_STREAM_BUFFER_SIZE_SET(CONTEXT, VALUE)                              ::System::Array::Resize(CONTEXT, VALUE)

#define MP_STREAM                                                              ::System::IO::Stream
#define MP_STREAM_INITIALIZE(CONTEXT)                                          CONTEXT = gcnew ::System::IO::MemoryStream()
#define MP_STREAM_FINALIZE(CONTEXT)                                            (CONTEXT)->Close(); (CONTEXT) = nullptr
#define MP_STREAM_EMPTY(CONTEXT)                                               ((CONTEXT)->Length == 0)
#define MP_STREAM_COPY(CONTEXT, VALUE)                                         (CONTEXT)->SetLength(0); (VALUE)->CopyTo(CONTEXT)
#define MP_STREAM_FLUSH(CONTEXT)                                               (CONTEXT)->Flush()
#define MP_STREAM_POSITION_GET(CONTEXT)                                        (CONTEXT)->Position
#define MP_STREAM_POSITION_SET(CONTEXT, VALUE)                                 (CONTEXT)->Position = VALUE
#define MP_STREAM_POSITION_SUPPORTED(CONTEXT)                                  (CONTEXT)->CanSeek
#define MP_STREAM_READ(CONTEXT, BUFFER, POSITION, SIZE)                        (CONTEXT)->Read(BUFFER, POSITION, SIZE)
#define MP_STREAM_READ_SUPPORTED(CONTEXT)                                      (CONTEXT)->CanRead
#define MP_STREAM_SIZE_GET(CONTEXT)                                            (CONTEXT)->Length
#define MP_STREAM_SIZE_SET(CONTEXT, VALUE)                                     (CONTEXT)->SetLength(VALUE)
#define MP_STREAM_WRITE(CONTEXT, BUFFER, POSITION, SIZE)                       (CONTEXT)->Write(BUFFER, POSITION, SIZE)
#define MP_STREAM_WRITE_SUPPORTED(CONTEXT)                                     (CONTEXT)->CanWrite

#define MP_STRING                                                              ::System::String^
#define MP_STRING_BUFFER                                                       ::System::String^
#define MP_STRING_CONST                                                        ::System::String^
#define MP_STRING_NEW                                                          gcnew ::System::String
#define MP_STRING_CREATE(VALUE, COUNT)                                         gcnew ::System::String(VALUE, COUNT)
#define MP_STRING_COMPARE(VALUE1, VALUE2)                                      (::System::String::Compare((VALUE1), (VALUE2), true) == 0)
#define MP_STRING_EMPTY(CONTEXT)                                               ::System::String::IsNullOrEmpty(CONTEXT)
#define MP_STRING_CONTAINS(CONTEXT, VALUE)                                     (CONTEXT)->Contains(VALUE)
#define MP_STRING_GET(CONTEXT, INDEX)                                          (CONTEXT)[INDEX]
#define MP_STRING_BUFFER_GET(CONTEXT)                                          (CONTEXT)
#define MP_STRING_SIZE_GET(CONTEXT)                                            ((int)((CONTEXT)->Length))
#define MP_STRING_RESERVE_GET(CONTEXT)                                         ((int)((CONTEXT)->Length))
#define MP_STRING_RESERVE_SET(CONTEXT, VALUE)
#define MP_STRING_INDEXFROM(CONTEXT, SUBSTRING, INDEX)                         (CONTEXT)->IndexOf(SUBSTRING, INDEX)
#define MP_STRING_INDEXOF(CONTEXT, SUBSTRING)                                  (CONTEXT)->IndexOf(SUBSTRING)
#define MP_STRING_LASTINDEXFROM(CONTEXT, SUBSTRING, INDEX)                     (CONTEXT)->LastIndexOf(SUBSTRING, INDEX)
#define MP_STRING_LASTINDEXOF(CONTEXT, SUBSTRING)                              (CONTEXT)->LastIndexOf(SUBSTRING)
#define MP_STRING_INSERT(CONTEXT, INDEX, VALUE)                                (CONTEXT)->Insert((INDEX), (VALUE))
#define MP_STRING_REMOVE(CONTEXT, INDEX, COUNT)                                (CONTEXT)->Remove((INDEX), (COUNT))
#define MP_STRING_SUBSTRING(CONTEXT, INDEX, COUNT)                             (CONTEXT)->Substring((INDEX), (COUNT))
#define MP_STRING_REPLACE(CONTEXT, OLD_VALUE, NEW_VALUE)                       (CONTEXT)->Replace((OLD_VALUE), (NEW_VALUE))
#define MP_STRING_UPPER(CONTEXT)                                               (CONTEXT)->ToUpper()
#define MP_STRING_LOWER(CONTEXT)                                               (CONTEXT)->ToLower()
#define MP_STRING_TRIM(CONTEXT)                                                (CONTEXT)->Trim()
#define MP_STRING_TRIMBEGIN(CONTEXT)                                           (CONTEXT)->TrimStart()
#define MP_STRING_TRIMEND(CONTEXT)                                             (CONTEXT)->TrimEnd()

#define MP_TIME                                                                ::System::DateTime
#define MP_TIME_CURRENT                                                        ::System::DateTime::Now
#define MP_TIME_TIMESTAMP_GET                                                  ::System::Diagnostics::Stopwatch::GetTimestamp
#define MP_TIME_TIMESTAMP_MILLISECOND_GET                                      ::System::Environment::TickCount
#define MP_TIME_MILISECOND_DIFF(CONTEXT1, CONTEXT2)                            (int)((CONTEXT2)->Subtract(*(CONTEXT1)).TotalMilliseconds)
#define MP_TIME_MILISECOND_ADD(CONTEXT, VALUE)                                 (CONTEXT) = (CONTEXT)->AddMilliseconds(VALUE)
#define MP_TIME_MILISECOND_GET(CONTEXT)                                        (CONTEXT)->Millisecond
#define MP_TIME_MILISECOND_SET(CONTEXT, VALUE)                                 (CONTEXT) = (CONTEXT)->AddMilliseconds(VALUE - (CONTEXT)->Millisecond)
#define MP_TIME_SECOND_ADD(CONTEXT, VALUE)                                     (CONTEXT) = (CONTEXT)->AddSeconds(VALUE)
#define MP_TIME_SECOND_GET(CONTEXT)                                            (CONTEXT)->Second
#define MP_TIME_SECOND_SET(CONTEXT, VALUE)                                     (CONTEXT) = (CONTEXT)->AddSeconds(VALUE - (CONTEXT)->Second)
#define MP_TIME_MINUTE_ADD(CONTEXT, VALUE)                                     (CONTEXT) = (CONTEXT)->AddMinutes(VALUE)
#define MP_TIME_MINUTE_GET(CONTEXT)                                            (CONTEXT)->Minute
#define MP_TIME_MINUTE_SET(CONTEXT, VALUE)                                     (CONTEXT) = (CONTEXT)->AddMinutes(VALUE - (CONTEXT)->Minute)
#define MP_TIME_HOUR_ADD(CONTEXT, VALUE)                                       (CONTEXT) = (CONTEXT)->AddHours(VALUE)
#define MP_TIME_HOUR_GET(CONTEXT)                                              (CONTEXT)->Hour
#define MP_TIME_HOUR_SET(CONTEXT, VALUE)                                       (CONTEXT) = (CONTEXT)->AddHours(VALUE - (CONTEXT)->Hour)
#define MP_TIME_DAY_ADD(CONTEXT, VALUE)                                        (CONTEXT) = (CONTEXT)->AddDays(VALUE)
#define MP_TIME_DAY_GET(CONTEXT)                                               (CONTEXT)->Day
#define MP_TIME_DAY_SET(CONTEXT, VALUE)                                        (CONTEXT) = (CONTEXT)->AddDays(VALUE - (CONTEXT)->Day)
#define MP_TIME_DAY_INDEX_GET(CONTEXT)                                         (int)(CONTEXT)->DayOfWeek
#define MP_TIME_MONTH_ADD(CONTEXT, VALUE)                                      (CONTEXT) = (CONTEXT)->AddMonths(VALUE)
#define MP_TIME_MONTH_GET(CONTEXT)                                             (CONTEXT)->Month
#define MP_TIME_MONTH_SET(CONTEXT, VALUE)                                      (CONTEXT) = (CONTEXT)->AddMonths(VALUE - (CONTEXT)->Month)
#define MP_TIME_YEAR_ADD(CONTEXT, VALUE)                                       (CONTEXT) = (CONTEXT)->AddYears(VALUE)
#define MP_TIME_YEAR_GET(CONTEXT)                                              (CONTEXT)->Year
#define MP_TIME_YEAR_SET(CONTEXT, VALUE)                                       (CONTEXT) = (CONTEXT)->AddYears(VALUE - (CONTEXT)->Year)

#define MP_TIMER                                                               ::System::Windows::Threading::DispatcherTimer
#define MP_TIMER_INITIALIZE(CONTEXT, CALLBACK)                                 CONTEXT = gcnew ::System::Windows::Threading::DispatcherTimer(); (CONTEXT)->Tick += gcnew ::System::EventHandler(CALLBACK)
#define MP_TIMER_FINALIZE(CONTEXT)                                             if (CONTEXT != nullptr) (CONTEXT)->Stop(); delete (CONTEXT); CONTEXT = nullptr
#define MP_TIMER_INTERVAL_GET(CONTEXT)                                         (CONTEXT)->Interval
#define MP_TIMER_INTERVAL_SET(CONTEXT, VALUE)                                  (CONTEXT)->Interval = ::System::TimeSpan::FromMilliseconds(VALUE)
#define MP_TIMER_CALLBACK_SENDER                                               ((sender != nullptr) ? dynamic_cast<::System::Windows::Threading::DispatcherTimer^>(sender)->Tag : nullptr)
#define MP_TIMER_CALLBACK_PROPERTIES                                           ::System::Object^ sender, ::System::EventArgs^
#define MP_TIMER_START(CONTEXT, PROPERTY)                                      (CONTEXT)->Tag = PROPERTY; (CONTEXT)->Start()
#define MP_TIMER_STOP(CONTEXT)                                                 (CONTEXT)->Stop()

#define MP_VECTOR(TYPE)                                                        ::System::Collections::Generic::List<TYPE^>
#define MP_VECTOR_EMPTY(CONTEXT)                                               ((CONTEXT)->Count == 0)
#define MP_VECTOR_CONTAINS(CONTEXT, INDEX)                                     (((INDEX) >= 0) && ((INDEX) < (CONTEXT)->Count))
#define MP_VECTOR_GET(CONTEXT, INDEX)                                          (CONTEXT)[INDEX]
#define MP_VECTOR_SIZE_GET(CONTEXT)                                            (CONTEXT)->Count
#define MP_VECTOR_INDEXOF(CONTEXT, VALUE)                                      (CONTEXT)->IndexOf(VALUE)
#define MP_VECTOR_APPEND(CONTEXT, VALUE)                                       (CONTEXT)->Add(VALUE)
#define MP_VECTOR_INSERT(CONTEXT, INDEX, VALUE)                                (CONTEXT)->Insert((INDEX), VALUE)
#define MP_VECTOR_DELETE(CONTEXT, INDEX)                                       (CONTEXT)->RemoveAt(INDEX)
#define MP_VECTOR_CLEAR(CONTEXT)                                               (CONTEXT)->Clear()

#ifdef MP_PROJECT_CONSOLE
#define MP_MAIN_FUNCTION_DECLARE(CONTEXT)                                      int main(array<System::String^>^ CONTEXT)
#define MP_MAIN_FUNCTION_PARAM_SIZE_GET(CONTEXT)                               CONTEXT->Length
#define MP_MAIN_FUNCTION_PARAM_GET(CONTEXT, INDEX)                             CONTEXT[INDEX]
#else
#define MP_MAIN_FUNCTION_DECLARE(CONTEXT)                                      int __stdcall wWinMain(_In_ HINSTANCE INSTANCE, _In_opt_ HINSTANCE PREV_INSTANCE, _In_ LPWSTR CONTEXT, _In_ int COMMAND_LINE_SIZE)
#define MP_MAIN_FUNCTION_PARAM_SIZE_GET(CONTEXT)                               COMMAND_LINE_SIZE
#define MP_MAIN_FUNCTION_PARAM_GET(CONTEXT, INDEX)                             CONTEXT[INDEX]
#endif
