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

#ifndef _DLGSIDECHANNELATTACKVISUALIZATIONHEPREPARATIONSREQUEST1_H_
#define _DLGSIDECHANNELATTACKVISUALIZATIONHEPREPARATIONSREQUEST1_H_

class CDlgSideChannelAttackVisualizationHEPreparationsRequest1 : public CDialog {
	enum { IDD = IDD_SIDECHANNELATTACKVISUALIZATION_HE_PREPARATIONS_REQUEST_1 };
public:
	CDlgSideChannelAttackVisualizationHEPreparationsRequest1(CWnd* pParent = NULL);
	virtual ~CDlgSideChannelAttackVisualizationHEPreparationsRequest1();
public:
	bool getRadioChoice1() const { return radioChoice1; }
	bool getRadioChoice2() const { return radioChoice2; }
protected:
	virtual BOOL OnInitDialog();
protected:
	virtual void OnBnClickedRadioChoice1();
	virtual void OnBnClickedRadioChoice2();
	virtual void OnBnClickedOK();
	virtual void OnBnClickedCancel();
protected:
	bool radioChoice1;
	bool radioChoice2;

	DECLARE_MESSAGE_MAP()
};

#endif
