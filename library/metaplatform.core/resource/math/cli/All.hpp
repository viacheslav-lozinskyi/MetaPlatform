//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#define MP_ABS(VALUE)                                                          ::System::Math::Abs(VALUE)
#define MP_MIN(VALUE1, VALUE2)                                                 ::System::Math::Min((VALUE1), (VALUE2))
#define MP_MAX(VALUE1, VALUE2)                                                 ::System::Math::Max((VALUE1), (VALUE2))
#define MP_POW(VALUEX, VALUEY)                                                 ::System::Math::Pow((VALUEX), (VALUEY))
#define MP_SQRT(VALUE)                                                         ::System::Math::Sqrt(VALUE)
#define MP_EXP(VALUE)                                                          ::System::Math::Exp(VALUE)
#define MP_LOG(VALUE)                                                          ::System::Math::Log(VALUE)
#define MP_LOG10(VALUE)                                                        ::System::Math::Log10(VALUE)
#define MP_ROUND(VALUE)                                                        ::System::Math::Round(VALUE)
#define MP_TRUNC(VALUE)                                                        ::System::Math::Truncate(VALUE)
#define MP_CEIL(VALUE)                                                         ::System::Math::Ceiling(VALUE)
#define MP_FLOOR(VALUE)                                                        ::System::Math::Floor(VALUE)
#define MP_SIN(VALUE)                                                          ::System::Math::Sin(VALUE)
#define MP_COS(VALUE)                                                          ::System::Math::Cos(VALUE)
#define MP_TAN(VALUE)                                                          ::System::Math::Tan(VALUE)
#define MP_SINH(VALUE)                                                         ::System::Math::Sinh(VALUE)
#define MP_COSH(VALUE)                                                         ::System::Math::Cosh(VALUE)
#define MP_TANH(VALUE)                                                         ::System::Math::Tanh(VALUE)
#define MP_ASIN(VALUE)                                                         ::System::Math::Asin(VALUE)
#define MP_ACOS(VALUE)                                                         ::System::Math::Acos(VALUE)
#define MP_ATAN(VALUE)                                                         ::System::Math::Atan(VALUE)

#define MP_RANDOM                                                              ::System::Random
#define MP_RANDOM_INITIALIZE(CONTEXT, SEED)                                    CONTEXT = gcnew ::System::Random(SEED)
#define MP_RANDOM_FINALIZE(CONTEXT)                                            delete CONTEXT
#define MP_RANDOM_GET(CONTEXT, MIN, MAX)                                       (int)((double)(MIN) + ((CONTEXT)->NextDouble() * ((double)(MAX) - (double)(MIN))))
