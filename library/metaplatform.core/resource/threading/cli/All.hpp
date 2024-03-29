//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#define MP_THREAD                                                              ::System::Threading::Thread
#define MP_THREAD_INITIALIZE(CONTEXT, CALLBACK)                                CONTEXT = gcnew ::System::Threading::Thread(gcnew ::System::Threading::ParameterizedThreadStart(CALLBACK))
#define MP_THREAD_FINALIZE(CONTEXT)                                            delete (CONTEXT)
#define MP_THREAD_CURRENT_GET                                                  ::System::Threading::Thread::CurrentThread
#define MP_THREAD_APARTMENT_GET(CONTEXT)                                       (CONTEXT)->GetApartmentState()
#define MP_THREAD_APARTMENT_SET(CONTEXT, VALUE)                                (CONTEXT)->TrySetApartmentState(VALUE)
#define MP_THREAD_NAME_GET(CONTEXT)                                            (CONTEXT)->Name
#define MP_THREAD_NAME_SET(CONTEXT, VALUE)                                     (CONTEXT)->Name = VALUE
#define MP_THREAD_ID_GET(CONTEXT)                                              (CONTEXT)->ManagedThreadId
#define MP_THREAD_PRIORITY_GET(CONTEXT)                                        (CONTEXT)->Priority
#define MP_THREAD_PRIORITY_SET(CONTEXT, VALUE)                                 (CONTEXT)->Priority = (VALUE)
#define MP_THREAD_SYNCHRONIZED_GET(ADDRESS)                                    ::System::Threading::Thread::VolatileRead(ADDRESS)
#define MP_THREAD_SYNCHRONIZED_SET(ADDRESS, VALUE)                             ::System::Threading::Thread::VolatileWrite((ADDRESS), VALUE)
#define MP_THREAD_CALLBACK_MAIN(CALLBACK, SENDER)                              CALLBACK(::System::Object^ SENDER)
#define MP_THREAD_START(CONTEXT, PROPERTY)                                     (CONTEXT)->Start(PROPERTY)
#define MP_THREAD_STOP(CONTEXT)                                                (CONTEXT)->Abort()
#define MP_THREAD_ALIVE(CONTEXT)                                               ((CONTEXT)->ThreadState == ::System::Threading::ThreadState::Running)
#define MP_THREAD_SLEEP(INTERVAL)                                              ::System::Threading::Thread::Sleep(INTERVAL)
#define MP_THREAD_YIELD                                                        ::System::Threading::Thread::Yield

#define MP_THREAD_APARTMENT                                                    ::System::Threading::ApartmentState
#define MP_THREAD_APARTMENT_MTA                                                ::System::Threading::ApartmentState::MTA
#define MP_THREAD_APARTMENT_STA                                                ::System::Threading::ApartmentState::STA

#define MP_THREAD_PRIORITY                                                     ::System::Threading::ThreadPriority
#define MP_THREAD_PRIORITY_IDLE                                                ::System::Threading::ThreadPriority::Lowest
#define MP_THREAD_PRIORITY_LOWER                                               ::System::Threading::ThreadPriority::BelowNormal
#define MP_THREAD_PRIORITY_NORMAL                                              ::System::Threading::ThreadPriority::Normal
#define MP_THREAD_PRIORITY_HIGHER                                              ::System::Threading::ThreadPriority::AboveNormal
#define MP_THREAD_PRIORITY_HIGHEST                                             ::System::Threading::ThreadPriority::Highest

#define MP_THREAD_INTERLOCKED_ADD(VARIABLE, VALUE)                             ::System::Threading::Interlocked::Add(VARIABLE, VALUE)
#define MP_THREAD_INTERLOCKED_DEC(VARIABLE)                                    ::System::Threading::Interlocked::Decrement(VARIABLE)
#define MP_THREAD_INTERLOCKED_INC(VARIABLE)                                    ::System::Threading::Interlocked::Increment(VARIABLE)
#define MP_THREAD_INTERLOCKED_GET(VARIABLE)                                    ::System::Threading::Interlocked::Read(VARIABLE)
#define MP_THREAD_INTERLOCKED_SET(VARIABLE, VALUE)                             ::System::Threading::Interlocked::Exchange((VARIABLE), VALUE)

#define MP_THREAD_CONDITION_VARIABLE                                           int
#define MP_THREAD_CONDITION_VARIABLE_INITIALIZE(CONTEXT)                       (CONTEXT) = 0
#define MP_THREAD_CONDITION_VARIABLE_FINALIZE(CONTEXT)                         ::System::Threading::Monitor::Exit(CONTEXT); (CONTEXT) = 0
#define MP_THREAD_CONDITION_VARIABLE_LOCK(CONTEXT)                             ::System::Threading::Monitor::Enter(CONTEXT)
#define MP_THREAD_CONDITION_VARIABLE_PULSE(CONTEXT)                            ::System::Threading::Monitor::PulseAll(CONTEXT)
#define MP_THREAD_CONDITION_VARIABLE_TRY(CONTEXT)                              ::System::Threading::Monitor::TryEnter(CONTEXT)
#define MP_THREAD_CONDITION_VARIABLE_UNLOCK(CONTEXT)                           ::System::Threading::Monitor::Exit(CONTEXT)
#define MP_THREAD_CONDITION_VARIABLE_WAIT(CONTEXT)                             ::System::Threading::Monitor::Wait(CONTEXT)

#define MP_THREAD_EVENT                                                        HANDLE
#define MP_THREAD_EVENT_INITIALIZE(CONTEXT, NAME)                              CONTEXT = ::CreateEventA(nullptr, SYNCHRONIZE | EVENT_MODIFY_STATE, FALSE, NAME);
#define MP_THREAD_EVENT_OPEN(CONTEXT, NAME)                                    CONTEXT = ::OpenEventA(SYNCHRONIZE | EVENT_MODIFY_STATE, FALSE, NAME)
#define MP_THREAD_EVENT_FINALIZE(CONTEXT)                                      ::CloseHandle(CONTEXT)
#define MP_THREAD_EVENT_WAIT(CONTEXT)                                          ::WaitForSingleObject(CONTEXT, INFINITE)
#define MP_THREAD_EVENT_LOCK(CONTEXT)                                          ::SetEvent(CONTEXT)
#define MP_THREAD_EVENT_UNLOCK(CONTEXT)                                        ::ResetEvent(CONTEXT)
#define MP_THREAD_EVENT_PULSE(CONTEXT)                                         ::PulseEvent(CONTEXT)

#define MP_THREAD_MUTEX                                                        ::System::Threading::Mutex
#define MP_THREAD_MUTEX_INITIALIZE(CONTEXT, NAME, ISLOCKED)                    CONTEXT = gcnew ::System::Threading::Mutex(ISLOCKED, NAME)
#define MP_THREAD_MUTEX_FINALIZE(CONTEXT)                                      delete (CONTEXT)
#define MP_THREAD_MUTEX_LOCK(CONTEXT)                                          (CONTEXT)->WaitOne()
#define MP_THREAD_MUTEX_UNLOCK(CONTEXT)                                        (CONTEXT)->ReleaseMutex()

#define MP_THREAD_SYNC                                                         ::System::Int32
#define MP_THREAD_SYNC_INITIALIZE(CONTEXT)                                     CONTEXT = gcnew ::System::Int32(1)
#define MP_THREAD_SYNC_FINALIZE(CONTEXT)                                       delete (CONTEXT)
#define MP_THREAD_SYNC_LOCKED(CONTEXT)                                         ::System::Threading::Monitor::IsEntered(CONTEXT)
#define MP_THREAD_SYNC_LOCK(CONTEXT)                                           ::System::Threading::Monitor::Enter(CONTEXT)
#define MP_THREAD_SYNC_UNLOCK(CONTEXT)                                         ::System::Threading::Monitor::Exit(CONTEXT)

#define MP_THREAD_SYNC_RW                                                      ::System::Threading::ReaderWriterLockSlim
#define MP_THREAD_SYNC_RW_INITIALIZE(CONTEXT)                                  CONTEXT = gcnew ::System::Threading::ReaderWriterLockSlim(::System::Threading::LockRecursionPolicy::SupportsRecursion)
#define MP_THREAD_SYNC_RW_FINALIZE(CONTEXT)                                    delete (CONTEXT)
#define MP_THREAD_SYNC_RW_READ_LOCKED(CONTEXT)                                 (CONTEXT)->IsReadLockHeld
#define MP_THREAD_SYNC_RW_READ_LOCK(CONTEXT)                                   (CONTEXT)->EnterWriteLock()
#define MP_THREAD_SYNC_RW_READ_UNLOCK(CONTEXT)                                 (CONTEXT)->ExitWriteLock()
#define MP_THREAD_SYNC_RW_WRITE_LOCKED(CONTEXT)                                (CONTEXT)->IsWriteLockHeld
#define MP_THREAD_SYNC_RW_WRITE_LOCK(CONTEXT)                                  (CONTEXT)->EnterReadLock()
#define MP_THREAD_SYNC_RW_WRITE_UNLOCK(CONTEXT)                                (CONTEXT)->ExitReadLock()

#define MP_PROCESS                                                             ::System::Diagnostics::Process
#define MP_PROCESS_CURRENT_GET                                                 ::System::Diagnostics::Process::GetCurrentProcess
#define MP_PROCESS_ID_GET(CONTEXT)                                             (CONTEXT)->Id
#define MP_PROCESS_NAME_GET(CONTEXT)                                           (CONTEXT)->ProcessName
