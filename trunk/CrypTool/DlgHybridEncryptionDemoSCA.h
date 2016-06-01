/**************************************************************************

  Copyright [2009] [CrypTool Team]

  This file is part of CrypTool.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

**************************************************************************/

#ifndef _DLGHYBRIDENCRYPTIONDEMOSCA_H_
#define _DLGHYBRIDENCRYPTIONDEMOSCA_H_

#include <afxwin.h>
#include <afxcmn.h>
#include <resource.h>

#include "DlgHybridEncryptionDemo.h"

class CDlgHybridEncryptionDemoSCA : public CDlgHybridEncryptionDemo {
public:
	CDlgHybridEncryptionDemoSCA(const CString &_documentFileName = "", const CString &_documentTitle = "", CWnd* pParent = NULL);
	virtual ~CDlgHybridEncryptionDemoSCA();
protected:
	afx_msg void OnButtonEncDocumentSym();
};

#endif
