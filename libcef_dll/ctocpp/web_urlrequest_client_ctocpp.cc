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

#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/response_cpptoc.h"
#include "libcef_dll/cpptoc/web_urlrequest_cpptoc.h"
#include "libcef_dll/ctocpp/web_urlrequest_client_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefWebURLRequestClientCToCpp::OnStateChange(
    CefRefPtr<CefWebURLRequest> requester, RequestState state)
{
  if(CEF_MEMBER_MISSING(struct_, on_state_change))
    return;

  struct_->on_state_change(struct_, CefWebURLRequestCppToC::Wrap(requester), 
      state);
}

void CefWebURLRequestClientCToCpp::OnRedirect(
    CefRefPtr<CefWebURLRequest> requester, CefRefPtr<CefRequest> request,
    CefRefPtr<CefResponse> response)
{
  if(CEF_MEMBER_MISSING(struct_, on_redirect))
    return;

  struct_->on_redirect(struct_, CefWebURLRequestCppToC::Wrap(requester), 
      CefRequestCppToC::Wrap(request), CefResponseCppToC::Wrap(response) );
}

void CefWebURLRequestClientCToCpp::OnHeadersReceived(
    CefRefPtr<CefWebURLRequest> requester, CefRefPtr<CefResponse> response)
{
  if(CEF_MEMBER_MISSING(struct_, on_headers_received))
    return;

  struct_->on_headers_received(struct_, CefWebURLRequestCppToC::Wrap(requester), 
      CefResponseCppToC::Wrap(response) );
}

void CefWebURLRequestClientCToCpp::OnProgress(
    CefRefPtr<CefWebURLRequest> requester, uint64 bytesSent,
    uint64 totalBytesToBeSent)
{
  if(CEF_MEMBER_MISSING(struct_, on_progress))
    return;

  struct_->on_progress(struct_, CefWebURLRequestCppToC::Wrap(requester), 
      bytesSent, totalBytesToBeSent);
}

void CefWebURLRequestClientCToCpp::OnData(CefRefPtr<CefWebURLRequest> requester,
    const void* data, int dataLength)
{
  if(CEF_MEMBER_MISSING(struct_, on_data))
    return;

  struct_->on_data(struct_, CefWebURLRequestCppToC::Wrap(requester),
      data, dataLength);
}

void CefWebURLRequestClientCToCpp::OnError(
    CefRefPtr<CefWebURLRequest> requester, ErrorCode errorCode)
{
  if(CEF_MEMBER_MISSING(struct_, on_error))
    return;

  struct_->on_error(struct_, CefWebURLRequestCppToC::Wrap(requester), 
      errorCode);
}


#ifndef NDEBUG
template<> long CefCToCpp<CefWebURLRequestClientCToCpp, CefWebURLRequestClient,
    cef_web_urlrequest_client_t>::DebugObjCt = 0;
#endif

