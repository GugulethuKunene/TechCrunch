//---------------------------------------------------------------------------

#pragma hdrstop

#include "CallerID.h"

  callerID::callerID()
  {
	Date1 = "12/15/17";
	sTime = "00:00";
	eTime = "12:00";
	lineUsed = 000;
	digits = 0;
	ISP = "Network";

  }

  void callerID::setValues(AnsiString date1,AnsiString time1,AnsiString time2,
   AnsiString lCode,AnsiString tens,AnsiString netW)
  {
	 Date1 = date1;
	sTime = time1;
	eTime = time2;
	lineUsed = StrToInt(lCode);
	digits = StrToInt(tens);
	ISP = netW;
  }
	AnsiString callerID::getNumbers()
	{
		return digits;
	}
	AnsiString callerID::getDate()
	{
		return Date1  ;
	}
	AnsiString callerID::createForm()
	{
	  AnsiString temp;

	  temp = getDate() + "\n" + sTime + "-" + eTime;
	  temp = temp + ISP +":\n" + digits + " : " + lineUsed;

	  return temp;
	}

	int callerID::getDuration()
	{

		return StrToInt(((StrToTime(sTime),StrToTime(eTime))));

	}
//---------------------------------------------------------------------------
#pragma package(smart_init)
