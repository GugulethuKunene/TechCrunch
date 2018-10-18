//---------------------------------------------------------------------------
 #include <vcl.h>
#ifndef CallerIDH
#define CallerIDH
#include <DateUtils.hpp>

class callerID
{
  private:
	AnsiString Date1;
	AnsiString sTime;
	AnsiString eTime;
	int lineUsed;
	int digits;
	AnsiString ISP;
   //	BillingUnit a; trying to use an public object
   public:
	callerID();
	void setValues(AnsiString,AnsiString,AnsiString, AnsiString,AnsiString,AnsiString);
	AnsiString getNumbers();
   //	TDate getDate();
    AnsiString getDate();
	AnsiString createForm();
	int getDuration();


};
//---------------------------------------------------------------------------
#endif
