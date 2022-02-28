//
// Created by wulda on 2022/2/28.
//
#ifndef _WX_INC_H_
#define _WX_INC_H_

#define __WXMSW__   /// 使用windows平台
#define WXUSINGDLL  /// 使用动态链接库

#ifdef _DEBUG
#define __WXDEBUG__  /// 使用WxWidgets调试
#endif //_DEBUG

#include "wx/config.h"

#include "wx/wx.h"       /// 使用WxWidgets通用功能和类
#include "wx/aui/aui.h" /// 使用AUI
#include "wx/artprov.h"  /// 使用预定义的图标资源

#endif ///_WX_INC_H_