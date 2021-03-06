// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing static and
// virtual method implementations. See the translator.README.txt file in the
// tools directory for more information.
//

#include "libcef_dll/ctocpp/client_ctocpp.h"
#include "libcef_dll/ctocpp/display_handler_ctocpp.h"
#include "libcef_dll/ctocpp/drag_handler_ctocpp.h"
#include "libcef_dll/ctocpp/find_handler_ctocpp.h"
#include "libcef_dll/ctocpp/focus_handler_ctocpp.h"
#include "libcef_dll/ctocpp/jsbinding_handler_ctocpp.h"
#include "libcef_dll/ctocpp/jsdialog_handler_ctocpp.h"
#include "libcef_dll/ctocpp/keyboard_handler_ctocpp.h"
#include "libcef_dll/ctocpp/life_span_handler_ctocpp.h"
#include "libcef_dll/ctocpp/load_handler_ctocpp.h"
#include "libcef_dll/ctocpp/menu_handler_ctocpp.h"
#include "libcef_dll/ctocpp/print_handler_ctocpp.h"
#include "libcef_dll/ctocpp/render_handler_ctocpp.h"
#include "libcef_dll/ctocpp/request_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefRefPtr<CefLifeSpanHandler> CefClientCToCpp::GetLifeSpanHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_life_span_handler))
    return NULL;

  cef_life_span_handler_t* handlerStruct =
      struct_->get_life_span_handler(struct_);
  if(handlerStruct)
    return CefLifeSpanHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}

CefRefPtr<CefLoadHandler> CefClientCToCpp::GetLoadHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_load_handler))
    return NULL;

  cef_load_handler_t* handlerStruct = struct_->get_load_handler(struct_);
  if(handlerStruct)
    return CefLoadHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}

CefRefPtr<CefRequestHandler> CefClientCToCpp::GetRequestHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_request_handler))
    return NULL;

  cef_request_handler_t* handlerStruct = struct_->get_request_handler(struct_);
  if(handlerStruct)
    return CefRequestHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}

CefRefPtr<CefDisplayHandler> CefClientCToCpp::GetDisplayHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_display_handler))
    return NULL;

  cef_display_handler_t* handlerStruct = struct_->get_display_handler(struct_);
  if(handlerStruct)
    return CefDisplayHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}

CefRefPtr<CefFocusHandler> CefClientCToCpp::GetFocusHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_focus_handler))
    return NULL;

  cef_focus_handler_t* handlerStruct = struct_->get_focus_handler(struct_);
  if(handlerStruct)
    return CefFocusHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}

CefRefPtr<CefKeyboardHandler> CefClientCToCpp::GetKeyboardHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_keyboard_handler))
    return NULL;

  cef_keyboard_handler_t* handlerStruct =
      struct_->get_keyboard_handler(struct_);
  if(handlerStruct)
    return CefKeyboardHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}

CefRefPtr<CefMenuHandler> CefClientCToCpp::GetMenuHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_menu_handler))
    return NULL;

  cef_menu_handler_t* handlerStruct = struct_->get_menu_handler(struct_);
  if(handlerStruct)
    return CefMenuHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}

CefRefPtr<CefPrintHandler> CefClientCToCpp::GetPrintHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_print_handler))
    return NULL;

  cef_print_handler_t* handlerStruct = struct_->get_print_handler(struct_);
  if(handlerStruct)
    return CefPrintHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}

CefRefPtr<CefFindHandler> CefClientCToCpp::GetFindHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_find_handler))
    return NULL;

  cef_find_handler_t* handlerStruct = struct_->get_find_handler(struct_);
  if(handlerStruct)
    return CefFindHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}

CefRefPtr<CefJSDialogHandler> CefClientCToCpp::GetJSDialogHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_jsdialog_handler))
    return NULL;

  cef_jsdialog_handler_t* handlerStruct =
      struct_->get_jsdialog_handler(struct_);
  if(handlerStruct)
    return CefJSDialogHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}

CefRefPtr<CefJSBindingHandler> CefClientCToCpp::GetJSBindingHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_jsbinding_handler))
    return NULL;

  cef_jsbinding_handler_t* handlerStruct =
      struct_->get_jsbinding_handler(struct_);
  if(handlerStruct)
    return CefJSBindingHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}

CefRefPtr<CefRenderHandler> CefClientCToCpp::GetRenderHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_render_handler))
    return NULL;

  cef_render_handler_t* handlerStruct = struct_->get_render_handler(struct_);
  if(handlerStruct)
    return CefRenderHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}

CefRefPtr<CefDragHandler> CefClientCToCpp::GetDragHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_drag_handler))
    return NULL;

  cef_drag_handler_t* handlerStruct = struct_->get_drag_handler(struct_);
  if(handlerStruct)
    return CefDragHandlerCToCpp::Wrap(handlerStruct);

  return NULL;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefClientCToCpp, CefClient,
    cef_client_t>::DebugObjCt = 0;
#endif

