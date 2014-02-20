// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// -------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//

#ifndef _DISPLAYHANDLER_CTOCPP_H
#define _DISPLAYHANDLER_CTOCPP_H

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else // BUILDING_CEF_SHARED

#include "include/cef.h"
#include "include/cef_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefDisplayHandlerCToCpp
    : public CefCToCpp<CefDisplayHandlerCToCpp, CefDisplayHandler,
        cef_display_handler_t>
{
public:
  CefDisplayHandlerCToCpp(cef_display_handler_t* str)
      : CefCToCpp<CefDisplayHandlerCToCpp, CefDisplayHandler,
          cef_display_handler_t>(str) {}
  virtual ~CefDisplayHandlerCToCpp() {}

  // CefDisplayHandler methods
  virtual void OnNavStateChange(CefRefPtr<CefBrowser> browser, bool canGoBack,
      bool canGoForward) OVERRIDE;
  virtual void OnAddressChange(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, const CefString& url) OVERRIDE;
  virtual void OnTitleChange(CefRefPtr<CefBrowser> browser,
      const CefString& title) OVERRIDE;
  virtual bool OnTooltip(CefRefPtr<CefBrowser> browser,
      CefString& text) OVERRIDE;
  virtual void OnStatusMessage(CefRefPtr<CefBrowser> browser,
      const CefString& value, StatusType type) OVERRIDE;
  virtual bool OnConsoleMessage(CefRefPtr<CefBrowser> browser,
      const CefString& message, const CefString& source, int line) OVERRIDE;
};

#endif // BUILDING_CEF_SHARED
#endif // _DISPLAYHANDLER_CTOCPP_H

