//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#define MP_COLOR                                                               ::System::Windows::Media::Color
#define MP_COLOR_A_GET(CONTEXT)                                                (CONTEXT).A
#define MP_COLOR_A_SET(CONTEXT, VALUE)                                         (CONTEXT).A = (VALUE)
#define MP_COLOR_R_GET(CONTEXT)                                                (CONTEXT).R
#define MP_COLOR_R_SET(CONTEXT, VALUE)                                         (CONTEXT).R = (VALUE)
#define MP_COLOR_G_GET(CONTEXT)                                                (CONTEXT).G
#define MP_COLOR_G_SET(CONTEXT, VALUE)                                         (CONTEXT).G = (VALUE)
#define MP_COLOR_B_GET(CONTEXT)                                                (CONTEXT).B
#define MP_COLOR_B_SET(CONTEXT, VALUE)                                         (CONTEXT).B = (VALUE)

#define MP_COLOR_SYSTEM_BORDER                                                 ::System::Windows::SystemColors::ActiveBorderColor
#define MP_COLOR_SYSTEM_CAPTION                                                ::System::Windows::SystemColors::ActiveCaptionColor
#define MP_COLOR_SYSTEM_CAPTION_TEXT                                           ::System::Windows::SystemColors::ActiveCaptionTextColor
#define MP_COLOR_SYSTEM_CAPTION_INACTIVE                                       ::System::Windows::SystemColors::InactiveCaptionColor
#define MP_COLOR_SYSTEM_CAPTION_INACTIVE_TEXT                                  ::System::Windows::SystemColors::InactiveCaptionTextColor
#define MP_COLOR_SYSTEM_CONTROL                                                ::System::Windows::SystemColors::ControlColor
#define MP_COLOR_SYSTEM_CONTROL_TEXT                                           ::System::Windows::SystemColors::ControlTextColor
#define MP_COLOR_SYSTEM_CONTROL_DISABLED_TEXT                                  ::System::Windows::SystemColors::GrayTextColor
#define MP_COLOR_SYSTEM_DESKTOP                                                ::System::Windows::SystemColors::DesktopColor
#define MP_COLOR_SYSTEM_HINT                                                   ::System::Windows::SystemColors::InfoColor
#define MP_COLOR_SYSTEM_HINT_TEXT                                              ::System::Windows::SystemColors::InfoTextColor
#define MP_COLOR_SYSTEM_MENU                                                   ::System::Windows::SystemColors::MenuColor
#define MP_COLOR_SYSTEM_MENU_TEXT                                              ::System::Windows::SystemColors::MenuTextColor
#define MP_COLOR_SYSTEM_SCROLLER                                               ::System::Windows::SystemColors::ControlColor
#define MP_COLOR_SYSTEM_SCROLLER_POINTER                                       ::System::Windows::SystemColors::ScrollBarColor
#define MP_COLOR_SYSTEM_SELECTED                                               ::System::Windows::SystemColors::HighlightColor
#define MP_COLOR_SYSTEM_SELECTED_TEXT                                          ::System::Windows::SystemColors::HighlightTextColor
#define MP_COLOR_SYSTEM_WINDOW                                                 ::System::Windows::SystemColors::WindowColor
#define MP_COLOR_SYSTEM_WINDOW_BORDER                                          ::System::Windows::SystemColors::WindowFrameColor
#define MP_COLOR_SYSTEM_WINDOW_TEXT                                            ::System::Windows::SystemColors::WindowTextColor

#define MP_PICTURE                                                             ::System::Windows::Media::Imaging::BitmapImage
#define MP_PICTURE_EMPTY(CONTEXT)                                              (((CONTEXT)->StreamSource != nullptr) ? (((CONTEXT)->PixelWidth <= 0) || ((CONTEXT)->PixelHeight <= 0)) : true)
#define MP_PICTURE_FREEZE_GET(CONTEXT)                                         (CONTEXT)->IsFrozen
#define MP_PICTURE_FREEZE_SET(CONTEXT, VALUE)                                  if (VALUE) { if ((CONTEXT)->CanFreeze) (CONTEXT)->Freeze(); } else {}
#define MP_PICTURE_FREEZE_SUPPORTED(CONTEXT)                                   (CONTEXT)->CanFreeze
#define MP_PICTURE_FORMAT_GET(CONTEXT)                                         (CONTEXT)->Format
#define MP_PICTURE_DPI_X_GET(CONTEXT)                                          (CONTEXT)->DpiX
#define MP_PICTURE_DPI_Y_GET(CONTEXT)                                          (CONTEXT)->DpiY
#define MP_PICTURE_SIZE_X_GET(CONTEXT)                                         (((CONTEXT)->StreamSource != nullptr) ? (CONTEXT)->PixelWidth : 0)
#define MP_PICTURE_SIZE_Y_GET(CONTEXT)                                         (((CONTEXT)->StreamSource != nullptr) ? (CONTEXT)->PixelHeight : 0)

#define MP_PICTURE_FORMAT                                                      System::Windows::Media::PixelFormat
#define MP_PICTURE_FORMAT_RGBA128FLOAT                                         System::Windows::Media::PixelFormats::Rgba128Float
#define MP_PICTURE_FORMAT_GRAY32FLOAT                                          System::Windows::Media::PixelFormats::Gray32Float
#define MP_PICTURE_FORMAT_GRAY16                                               System::Windows::Media::PixelFormats::Gray16
#define MP_PICTURE_FORMAT_PRGBA64                                              System::Windows::Media::PixelFormats::Prgba64
#define MP_PICTURE_FORMAT_RGBA64                                               System::Windows::Media::PixelFormats::Rgba64
#define MP_PICTURE_FORMAT_RGB48                                                System::Windows::Media::PixelFormats::Rgb48
#define MP_PICTURE_FORMAT_PBGRA32                                              System::Windows::Media::PixelFormats::Pbgra32
#define MP_PICTURE_FORMAT_BGRA32                                               System::Windows::Media::PixelFormats::Bgra32
#define MP_PICTURE_FORMAT_BGR32                                                System::Windows::Media::PixelFormats::Bgr32
#define MP_PICTURE_FORMAT_BGR101010                                            System::Windows::Media::PixelFormats::Bgr101010
#define MP_PICTURE_FORMAT_RGB24                                                System::Windows::Media::PixelFormats::Rgb24
#define MP_PICTURE_FORMAT_BGR24                                                System::Windows::Media::PixelFormats::Bgr24
#define MP_PICTURE_FORMAT_RGB128FLOAT                                          System::Windows::Media::PixelFormats::Rgb128Float
#define MP_PICTURE_FORMAT_BGR565                                               System::Windows::Media::PixelFormats::Bgr565
#define MP_PICTURE_FORMAT_BGR555                                               System::Windows::Media::PixelFormats::Bgr555
#define MP_PICTURE_FORMAT_GRAY8                                                System::Windows::Media::PixelFormats::Gray8
#define MP_PICTURE_FORMAT_GRAY4                                                System::Windows::Media::PixelFormats::Gray4
#define MP_PICTURE_FORMAT_GRAY2                                                System::Windows::Media::PixelFormats::Gray2
#define MP_PICTURE_FORMAT_BLACKWHITE                                           System::Windows::Media::PixelFormats::BlackWhite
#define MP_PICTURE_FORMAT_INDEXED8                                             System::Windows::Media::PixelFormats::Indexed8
#define MP_PICTURE_FORMAT_INDEXED4                                             System::Windows::Media::PixelFormats::Indexed4
#define MP_PICTURE_FORMAT_INDEXED2                                             System::Windows::Media::PixelFormats::Indexed2
#define MP_PICTURE_FORMAT_INDEXED1                                             System::Windows::Media::PixelFormats::Indexed1
#define MP_PICTURE_FORMAT_PRGBA128FLOAT                                        System::Windows::Media::PixelFormats::Prgba128Float
#define MP_PICTURE_FORMAT_CMYK32                                               System::Windows::Media::PixelFormats::Cmyk32

#define MP_POINT                                                               ::System::Windows::Point
#define MP_POINT_X_GET(CONTEXT)                                                ((int)(CONTEXT).X)
#define MP_POINT_X_SET(CONTEXT, VALUE)                                         (CONTEXT).X = (float)((int)(VALUE))
#define MP_POINT_Y_GET(CONTEXT)                                                ((int)(CONTEXT).Y)
#define MP_POINT_Y_SET(CONTEXT, VALUE)                                         (CONTEXT).Y = (float)((int)(VALUE))

#define MP_RECT                                                                ::System::Windows::Rect
#define MP_RECT_CONTAINS(CONTEXT, X, Y)                                        (CONTEXT).Contains((float)(X), (float)(Y))
#define MP_RECT_X_GET(CONTEXT)                                                 ((int)(CONTEXT).X)
#define MP_RECT_X_SET(CONTEXT, VALUE)                                          (CONTEXT).X = (float)(VALUE)
#define MP_RECT_Y_GET(CONTEXT)                                                 ((int)(CONTEXT).Y)
#define MP_RECT_Y_SET(CONTEXT, VALUE)                                          (CONTEXT).Y = (float)(VALUE)
#define MP_RECT_SIZE_X_GET(CONTEXT)                                            ((int)(CONTEXT).Width)
#define MP_RECT_SIZE_X_SET(CONTEXT, VALUE)                                     (CONTEXT).Width = (float)(VALUE)
#define MP_RECT_SIZE_Y_GET(CONTEXT)                                            ((int)(CONTEXT).Height)
#define MP_RECT_SIZE_Y_SET(CONTEXT, VALUE)                                     (CONTEXT).Height = (float)(VALUE)

#define MP_SOUND                                                               ::System::Windows::Media::MediaPlayer
#define MP_SOUND_INITIALIZE(CONTEXT, URL)                                      (CONTEXT)->Open(URL)
#define MP_SOUND_MUTE_GET(CONTEXT)                                             (CONTEXT)->IsMuted
#define MP_SOUND_MUTE_SET(CONTEXT, VALUE)                                      (CONTEXT)->IsMuted = (VALUE)
#define MP_SOUND_POSITION_GET(CONTEXT)                                         (CONTEXT)->Position->Milliseconds
#define MP_SOUND_POSITION_SET(CONTEXT, VALUE)                                  (CONTEXT)->Position->Milliseconds = System::TimeSpan::FromMilliseconds(VALUE)
#define MP_SOUND_SIZE_GET(CONTEXT)                                             (CONTEXT)->NaturalDuration->TimeSpan->Milliseconds
#define MP_SOUND_VOLUME_GET(CONTEXT)                                           (CONTEXT)->Volume
#define MP_SOUND_VOLUME_SET(CONTEXT, VALUE)                                    (CONTEXT)->Volume = (VALUE)
#define MP_SOUND_PAUSE(CONTEXT)                                                (CONTEXT)->Pause()
#define MP_SOUND_PLAY(CONTEXT)                                                 (CONTEXT)->Play()
#define MP_SOUND_PLAY_SYSTEM(CONTEXT)                                          (CONTEXT)->Play()
#define MP_SOUND_STOP(CONTEXT)                                                 (CONTEXT)->Stop()

#define MP_SOUND_SYSTEM                                                        ::System::Media::SystemSound
#define MP_SOUND_SYSTEM_ASTERISK                                               ::System::Media::SystemSounds::Asterisk
#define MP_SOUND_SYSTEM_BEEP                                                   ::System::Media::SystemSounds::Beep
#define MP_SOUND_SYSTEM_EXCLAMATION                                            ::System::Media::SystemSounds::Exclamation
#define MP_SOUND_SYSTEM_HAND                                                   ::System::Media::SystemSounds::Hand
#define MP_SOUND_SYSTEM_QUESTION                                               ::System::Media::SystemSounds::Question
