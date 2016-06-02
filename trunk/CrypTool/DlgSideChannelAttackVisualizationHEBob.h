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

#ifndef _DLGSIDECHANNELATTACKVISUALIZATIONHEBOB_H_
#define _DLGSIDECHANNELATTACKVISUALIZATIONHEBOB_H_

#include "DlgSideChannelAttackVisualizationHE.h"
#include "SideChannelAttack.h"
#include "PictureEx.h"

class CDlgSideChannelAttackVisualizationHEBob : public CDialog {
	enum { IDD = IDD_SIDECHANNELATTACKVISUALIZATION_HE_BOB };
public:
	CDlgSideChannelAttackVisualizationHEBob(CWnd* pParent = NULL);
	virtual ~CDlgSideChannelAttackVisualizationHEBob();
protected:
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);
protected:
	virtual void OnOK();
protected:
	void updateDisplay();
protected:
	CListBox m_ControlTasks;
	CListCtrl m_ListReceivedSessionKeys;
private:
	CString keyword;

	DECLARE_MESSAGE_MAP()
};

#endif
