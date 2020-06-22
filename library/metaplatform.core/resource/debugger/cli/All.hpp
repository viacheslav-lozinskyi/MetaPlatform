//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#define MP_ASSERT(CONDITION, MESSAGE)                                          ::System::Diagnostics::Debug::Assert(CONDITION, MESSAGE)

#ifdef MP_DEBUG
#define MP_DEBUGGER_DISABLED                                                   [::System::Diagnostics::DebuggerStepThrough]
#define MP_DEBUGGER_PROXY(TYPE)                                                [::System::Diagnostics::DebuggerTypeProxy(TYPE::typeid)]
#define MP_DEBUGGER_TITLE(TEXT)                                                [::System::Diagnostics::DebuggerDisplay(TEXT)]
#define MP_DEBUGGER_JOINED                                                     [::System::Diagnostics::DebuggerBrowsable(::System::Diagnostics::DebuggerBrowsableState::RootHidden)]
#else
#define MP_DEBUGGER_DISABLED                                                   [::System::Diagnostics::DebuggerStepThrough]
#define MP_DEBUGGER_PROXY(TYPE)
#define MP_DEBUGGER_TITLE(TEXT)
#define MP_DEBUGGER_JOINED                                                     [::System::Diagnostics::DebuggerBrowsable(::System::Diagnostics::DebuggerBrowsableState::RootHidden)]
#endif

#define MP_DEBUGGER_BREAK                                                      ::System::Diagnostics::Debugger::Break

#define MP_TRACE_DEBUG(MESSAGE)                                                ::System::Diagnostics::Debug::WriteLine(MESSAGE)

#define MP_STACKTRACE                                                          ::System::Diagnostics::StackTrace^
#define MP_STACKTRACE_INITIALIZE(CONTEXT)                                      CONTEXT = gcnew ::System::Diagnostics::StackTrace(true)
#define MP_STACKTRACE_FINALIZE(CONTEXT)                                        delete (CONTEXT); CONTEXT = nullptr
#define MP_STACKTRACE_FRAME_COUNT_GET(CONTEXT)                                 (CONTEXT)->FrameCount
#define MP_STACKTRACE_FRAME_GET(CONTEXT, INDEX)                                (CONTEXT)->GetFrame(INDEX)

#define MP_STACKFRAME                                                          ::System::Diagnostics::StackFrame^
#define MP_STACKFRAME_FILE_LINE_GET(CONTEXT)                                   (CONTEXT)->GetFileLineNumber()
#define MP_STACKFRAME_FILE_NAME_GET(CONTEXT)                                   (CONTEXT)->GetFileName()
#define MP_STACKFRAME_FILE_POSITION_GET(CONTEXT)                               (CONTEXT)->GetFileColumnNumber()
#define MP_STACKFRAME_METHOD_NAME_GET(CONTEXT)                                 (CONTEXT)->GetMethod()->Name
#define MP_STACKFRAME_METHOD_PARAM_COUNT_GET(CONTEXT)                          (CONTEXT)->GetMethod()->GetParameters()->Length
#define MP_STACKFRAME_METHOD_PARAM_GET(CONTEXT, INDEX)                         (CONTEXT)->GetMethod()->GetParameters()[INDEX]
#define MP_STACKFRAME_MODULE_NAME_GET(CONTEXT)                                 (CONTEXT)->GetMethod()->Module->Name

#define MP_STACKPARAM                                                          ::System::Reflection::ParameterInfo^
#define MP_STACKPARAM_TYPE_NAME_GET(CONTEXT)                                   (CONTEXT)->ParameterType->FullName
#define MP_STACKPARAM_NAME_GET(CONTEXT)                                        (CONTEXT)->Name
