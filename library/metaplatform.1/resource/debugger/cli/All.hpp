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

#define MP_TRACE_DEBUG(MESSAGE)                                                ::System::Diagnostics::Debug::WriteLine(MESSAGE)
